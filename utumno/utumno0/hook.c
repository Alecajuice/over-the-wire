#include <stdio.h>
#include <unistd.h>

int puts(const char *s) {
  printf("Hooked\n");
  char *const argv[] = {NULL};
  execve("/bin/sh", argv, argv);
}
