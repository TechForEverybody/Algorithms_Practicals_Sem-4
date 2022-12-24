#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    int n;
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(ptr + i));
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", *(ptr + i));
    }
    getch();
}