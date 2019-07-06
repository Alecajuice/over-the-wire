#include <stdio.h>
#include <unistd.h>

int main(int argc, char *const argv[], char *const envp[]) {
  printf("pid 1: %d\n", getpid());
  char *path;
  sprintf(path, "/tmp/%d", getpid());
  FILE *file = fopen(path, "w");
  fprintf(file, "benis");
  fclose(file);
  execve("test2", argv, envp);
  return 0;
}
