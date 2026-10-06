#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap;   // declare pointer
    forheap = (int *)malloc(sizeof(int));
    *forheap = 30;  // stored value to allocation

    printf("address of pointer (stack): %p\n", (void*)&forheap);
    printf("address of data (heap):     %p\n", (void*)forheap);
    printf("value stored:               %d\n", *forheap);

    return 0;
}