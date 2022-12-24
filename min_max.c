#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int *arr = NULL;
int min, max;

struct min_max
{
    int min, max;
};

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

struct min_max minimum_maximum(int low, int high)
{
    struct min_max l, r;
    unsigned mid;
    if (low == high)
    {
        l.max = arr[low];
        l.min = arr[high];
        return l;
    }
    else if (high - low == 1)
    {
        if (arr[low] > arr[high])
        {
            l.max = arr[low];
            l.min = arr[high];
        }
        else
        {
            l.max = arr[high];
            l.min = arr[low];
        }
        return l;
    }
    mid = (low + high) / 2;
    l = minimum_maximum(low, mid);
    r = minimum_maximum(mid + 1, high);
    if (l.max > r.max)
    {
        l.max = l.max;
    }
    else
    {
        l.max = r.max;
    }
    if (l.min > r.min)
    {
        l.min = r.min;
    }
    else
    {
        l.min = l.min;
    }
    return l;
}

void main()
{
    long long int n;
    struct min_max m;
    printf("\nenter the number of nay elements to be entered : ");
    scanf("%lld", &n);
    if (n > 0)
    {
        arr = (int *)malloc(n * sizeof(int));
        if (arr != NULL)
        {
            take_input(n);
            print_elements(n);
            m = minimum_maximum(0, n - 1);
            printf("\nmax= %d \n", m.max);
            printf("\nmin= %d \n", m.min);
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

    getch();
}