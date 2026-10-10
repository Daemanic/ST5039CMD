#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int global_int = 10;
int global_uninit;

int main() {
    int local_var = 30;

    int *heap_var = malloc(sizeof(int));
    *heap_var = 40;

    printf("data (global_init):     %p\n", (void *)&global_int);
    printf("bss (global_uninit):    %p\n", (void *)&global_uninit);
    printf("heap (heap_var):        %p\n", (void *)heap_var);
    printf("stack (local_var):      %p\n", (void *)&local_var);

    uintptr_t diff = (uintptr_t)&local_var - (uintptr_t)heap_var;
    printf("\nstack - heap = %lu bytes (0x%lx)\n", (unsigned long)diff, (unsigned long)diff);

    free(heap_var);
    return 0;
}