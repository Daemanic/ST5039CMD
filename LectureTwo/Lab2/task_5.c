#include <stdio.h>
#include <unistd.h>

int main() {
    int choice;
    printf("current pid: %d\n", getpid());
    printf("do you want to continue [1/0]: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("~continuing~\n");
        sleep(5);
        return 0;
    } else {
        printf("~exiting~\n");
        return 1;
    }
}