#include <stdio.h>
#include <dlfcn.h>

int puts(const char *message) {
  int (*new_puts)(const char *message);
  new_puts = dlsym(RTLD_NEXT, "puts");
  new_puts("Hooked!");
  char *const argv[] = {NULL};
  execve("strings /utumno/utumno0", argv, argv);
  return 0;
}
