#include <sys/stat.h>
#include <stdio.h>

int main() {
  printf("%ld", sizeof(struct stat));
  return sizeof(stat);
}
