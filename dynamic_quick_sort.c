#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int *arr = NULL;

int take_input(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter the number %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}
int print_elements(int n)
{
    printf("elements of array are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void quick_sort(int low, int high)
{
    int p, i, j, temp;
    if (low < high)
    {
        p = i = low;
        j = high;
        while (i < j)
        {
            while (arr[i] <= arr[p])
            {
                i++;
            }
            while (arr[j] > arr[p])
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[p];
        arr[p] = arr[j];
        arr[j] = temp;
        quick_sort(low, j - 1);
        quick_sort(j + 1, high);
    }
}

int main()
{
    long long int n;
    printf("Enter the size of array : ");
    scanf("%lld", &n);
    if (n > 0)
    {
        arr = (int *)malloc(n * sizeof(int));
        if (arr != NULL)
        {
            take_input(n);
            print_elements(n);
            quick_sort(0, n - 1);
            printf("\nAfter sorting the array\n");
            print_elements(n);
        }
        else
        {
            printf("\nmemory not allocated\n");
        }
    }
    else
    {
        printf("\nsize is zero or negative\n");
    }
    free(arr);
    return 0;
}
