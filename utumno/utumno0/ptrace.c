#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/user.h>
#include <sys/reg.h>
#include <errno.h>
#include <sys/syscall.h>
#include <sys/stat.h>

int main() {
  pid_t child;
  long data;
  int status;
  child = fork();
  if(child == 0) {
    ptrace(PTRACE_TRACEME, 0, NULL, NULL);
    execl("/utumno/utumno0_hard", "/utumno/utumno0_hard", NULL);
  }
  else {
    while(1) {
      wait(&status);
      if(WIFEXITED(status)) break;
      long orig_eax = ptrace(PTRACE_PEEKUSER, child, 4 * ORIG_EAX, NULL);
      if (orig_eax == SYS_write) {
	long rsp = ptrace(PTRACE_PEEKUSER, child, 4 * UESP, NULL);
	printf("ESP: %lx\n", rsp);
	
	long rbx = ptrace(PTRACE_PEEKUSER, child, 4 * ECX, NULL);
	printf("RBX before: %lx\n", rbx);
	ptrace(PTRACE_POKEUSER, child, 4 * EDX, 256);
	ptrace(PTRACE_POKEUSER, child, 4 * ECX, 0x08048490);
	rbx = ptrace(PTRACE_PEEKUSER, child, 4 * ECX, NULL);
	printf("RBX after: %lx\n", rbx);

	/*
	data = ptrace(PTRACE_PEEKTEXT, child, rsp, NULL);
	if(data == -1) {
	  printf("%d", errno);
	}
	printf("data: %lx\n", data);
	*/
      }
      ptrace(PTRACE_SYSCALL, child, NULL, NULL);
    }
  }
  return 0;
}
