#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include<ctype.h>
int arr[10] = {1, 2, 3, 4, 5};
int take_input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            scanf("%d", &arr[i], printf("\nenter the number %d : ", (i + 1)));
            if (isdigit(arr[i])==0)
            {
                break;
            }
            else
            {
                printf("\nplease enter the valid input\n");
            }
        }
    }
}
int print_elements(int arr[], int n)
{
    printf("\nelements of array are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void selection_sort(int arr[], int n)
{
    int key, temp;
    for (int i = 0; i < n; i++)
    {
        key = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[key])
            {
                key = j;
            }
        }
        temp = arr[key];
        arr[key] = arr[i];
        arr[i] = temp;
    }
}

void main()
{
    clock_t st, end;
    st = clock();
    int *arr = NULL;
    int n;
    printf("\n%d\n", arr);
    printf("\n%p\n", arr);
    printf("\n%u\n", arr);
    // printf("\nenter the size of array : \n");
    // scanf("%d", &n);
    n = 5;
    arr = (int *)malloc(n * (sizeof(int)));
    // int temp[5] = {1, 2, 3, 4, 5};
    // arr = temp;
    printf("\n%p\n",arr);
    if (arr != NULL && n != 0)
    {
        take_input(arr, n);
        selection_sort(arr, n);
    }

    print_elements(arr, n);
    print_elements(arr, n);
    end = clock();
    printf("\n%f            %f\n", st / 1000.0, end / 1000.0);
    printf("\n%f\n", (end - st) / 1000.0);
    getch();
}