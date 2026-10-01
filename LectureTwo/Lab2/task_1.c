#include <stdio.h>
#include <unistd.h>

int main() {
    printf("~ starting ~\n");
    pid_t childs = getpid();
    pid_t parents = getppid();

    for (int i = 1; i <= 30; i++){
        sleep(1);
    }
    printf("child process PID: %d\n", childs);
    printf("parent process PID: %d\n", parents);
    printf("~ finished ~\n");
    
    return 0;
}