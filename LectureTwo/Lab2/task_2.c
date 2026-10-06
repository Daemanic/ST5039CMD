#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t my_pid = getpid();
    pid_t my_ppid = getppid();

    printf("my pid:     %d\n", my_pid);
    printf("parent pid: %d\n", my_ppid);

    printf("~ sleeping for 20 seconds ~\n");
    sleep(20);

    return 0;
}