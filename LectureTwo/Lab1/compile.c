#include <stdio.h>

int main(){
    printf("~ 250498 ~\n");
    char user[10];
    int num;
    printf("username: ");
    scanf("%s", user);
    printf("age: ");
    scanf("%i", &num);
    printf("[user, age]: [%s, %i]", user, num);

    return 0;
}