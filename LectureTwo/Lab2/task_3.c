#include <stdio.h>
#include <unistd.h>

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("success\n");
        return 0;
    } else {
        printf("failure\n");
        return 1;
    }
    return 0;
}