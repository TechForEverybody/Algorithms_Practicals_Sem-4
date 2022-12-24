#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int arr[10];
int take_input(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the number %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}
int print_elements(int n)
{
    printf("\nelements of array are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void binary_search(int n, int h)
{
    int low = 0;
    int high = h - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (n == arr[low])
        {
            printf("\nfound\n");
            break;
        }
        else if (n == arr[high])
        {
            printf("\nfound\n");
            break;
        }
        else if (n == arr[mid])
        {
            printf("\nfound\n");
            break;
        }
        else if (n > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        if (low > high || high < low)
        {
            printf("\nnot found\n");
            break;
        }
    }
}

void main()
{
    int e, n;
    printf("\nenter the number of elements to be entered : ");
    scanf("%d", &e);
    take_input(e);
    print_elements(e);
    printf("\nenter the number to be searched : \n");
    scanf("%d", &n);
    binary_search(n, e);
    print_elements(e);
    getch();
}