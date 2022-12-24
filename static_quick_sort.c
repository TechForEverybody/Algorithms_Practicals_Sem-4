#include <stdio.h>
int arr[50];

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
    int n;
    printf("Please enter size as positive number less than 50\n");
    printf("Enter the size of array : ");
    scanf("%d", &n);
    take_input(n);
    print_elements(n);
    quick_sort(0, n - 1);
    printf("\nAfter sorting the array using quick sort\n");
    print_elements(n);
    return 0;
}
