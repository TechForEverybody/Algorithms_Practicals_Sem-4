#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int graph[5][5] = {
        {0, 1, 2, 1000, 1000},

        {1000, 0, 3, 1000, 1000},

        {1000, 1000, 0, 5, 6},

        {1000, 4, 1000, 0, 1000},

        {1000, 1000, 1000, 7, 0}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", graph[i][j]);
        }
        printf("\n");
    }
    int source = 0;

    int shortestpaths[] = { 0,
                            0,
                            0,
                            0,
                            0 }

    for (int i = 0; i < 5; i++)
    {
    }

    getch();
}