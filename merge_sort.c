#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max n
int *arr = NULL;
long long int n;
int take_input()
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }
}

int print_elements()
{
    printf("\nelements of array are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void merge_elements(int first1, int last1, int first2, int last2)
{
    int temp[max];
    int i = first1;
    int j = first2;
    int k = 0;
    while (i <= last1 && j <= last2)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= last1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= last2)
    {
        temp[k++] = arr[j++];
    }
    for (int i = 0, f = first1; f <= last2; f++, i++)
    {
        arr[f] = temp[i];
    }
}

void merge_sort(int first, int last)
{
    int mid;
    if (first < last)
    {
        mid = (first + last) / 2;
        merge_sort(first, mid);
        merge_sort(mid + 1, last);
        merge_elements(first, mid, mid + 1, last);
    }
}

int main()
{
    printf("Enter the size of array: ");
    scanf("%lld", &n);
    if (n > 0)
    {
        arr = (int *)malloc(sizeof(int)*n);
        if (arr != NULL)
        {
            take_input();
            print_elements();
            merge_sort(0, n - 1);
            printf("\nAfter sorting array\n");
            print_elements();
        }
        else
        {
            printf("\nmemory is not allocated\n");
        }
    }
    else
    {
        printf("\nsize is zero or negative\n");
    }
    free(arr);
    return 0;
}
