#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 5;

    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        ptr[i] = i * 2;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    
    free(ptr);
    return 0;
}
