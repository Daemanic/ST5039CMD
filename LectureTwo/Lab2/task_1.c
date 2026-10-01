#include <stdio.h>
#include <unistd.h>

int main() {
    printf("~ starting ~\n");

    for (int i = 1; i <= 30; i++){
        sleep(1);
    }
    printf("~ finished ~\n");
    
    return 0;
}