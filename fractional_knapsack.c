#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct element{
    int p;
    int w;
    float ratio;
};

void main()
{
    struct element *knapsack=NULL;
    struct element temp;
    int capacity,increasing_capacity,profit,n;


    printf("\nEnter the number of elements : ");
    scanf("%d",&n);

    printf("\nenter the capacity : ");
    scanf("%d",&capacity);


    knapsack=(struct element*)malloc(n*sizeof(struct element));


    for (int i = 0; i < n; i++)
    {
        printf("\nenter weight %d : ",i+1);
        scanf("%d",&knapsack[i].w);
        printf("enter profit %d : ",i+1);
        scanf("%d",&knapsack[i].p);
        knapsack[i].ratio=1.0*knapsack[i].p/knapsack[i].w;
    }


    printf("\nyour entered data is\n");
    printf("\nwaight    profits   profits/waights");
    for (int i = 0; i < n; i++)
    {
        printf("\n%2d        %2d        %f",knapsack[i].w,knapsack[i].p,knapsack[i].ratio);
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (knapsack[i].ratio > knapsack[j].ratio)
            {
                temp=knapsack[i];
                knapsack[i]=knapsack[j];
                knapsack[j]=temp;
            }
        }
    }


    printf("\n\nafter the sorting with respect to ratio data will become");
    printf("\nwaight    profits   profits/waights");
    for (int i = 0; i < n; i++)
    {
        printf("\n%2d        %2d        %f",knapsack[i].w,knapsack[i].p,knapsack[i].ratio);
    }



    increasing_capacity=0;
    profit=0;
    for (int i = 0; i < n; i++)
    {
        if ((increasing_capacity+knapsack[i].w)<capacity)
        {
            increasing_capacity=increasing_capacity+knapsack[i].w;
            profit=profit+knapsack[i].p;
        }
        else
        {
            profit=profit+knapsack[i].p*1.0*(1.0*(capacity-increasing_capacity)/knapsack[i].w);
            break;
        }
    }


    printf("\nprofit : %d\n",profit);
    // printf("\n%d\n",increasing_capacity);
    getch();
}