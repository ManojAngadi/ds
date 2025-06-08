#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(3 * sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    printf("Values: %d %d %d\n", ptr[0], ptr[1], ptr[2]);
    free(ptr);
    return 0;
}
