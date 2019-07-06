#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *const argv[]) {
  int num = atoi(argv[1]);
  for (int i = 0; i < num; i++) {
    printf("PAD%d=$(python -c 'print \"A\"*100000)\n", i);
  }
}
