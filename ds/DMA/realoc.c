#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Initial allocated memory:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    n = 8;
    arr = (int *)realloc(arr, n * sizeof(int));
    if (arr == NULL) {
        printf("\nMemory reallocation failed!\n");
        return 1;
    }
    for (int i = 5; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }
    printf("\nMemory after reallocation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
