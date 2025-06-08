#include <stdio.h>

void TOH(int n, char S, char D, char T);

int main()
{
    int n;
    printf("\n Enter number of disks: ");
    scanf("%d", &n);
    TOH(n, 's', 'D', 'T');
    return 0;
}

void TOH(int n, char S, char D, char T)
{
    if (n > 0)
    {
        TOH(n - 1, S, T, D);
        printf("Move Disc %d from %c to %c\n", n, S, D);
        TOH(n - 1, T, D, S);
    }
}
