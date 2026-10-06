#include <stdio.h>
#include <stdlib.h>

int global_var = 100;
static int static_var = 200;

int main() {
    int local_var = 300;
    static int local_static = 400;

    int *heap_var = (int*)malloc(sizeof(int));
    *heap_var = 500;

    printf("~ variable address ~\n");
    printf("global_var:     %p (data/bss)\n", (void*)&global_var);
    printf("static_var:     %p (data/bss)\n", (void*)&static_var);
    printf("local_var:      %p (stack)\n", (void*)&local_var);
    printf("local_static:   %p (data/bss)\n", (void*)&local_static);
    printf("heap_var ptr:   %p (pointer itself)\n", (void*)&heap_var);
    printf("*heap_var:      %p (actual data)\n", (void*)heap_var);

    free(heap_var);
    return 0;
}