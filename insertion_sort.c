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
void insertion_sort(int n)
{
    int key, j, temp;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void main()
{
    take_input(5);
    print_elements(5);
    insertion_sort(5);
    print_elements(5);
    getch();
}