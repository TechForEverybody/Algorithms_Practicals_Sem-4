#include <stdio.h>
#include <conio.h>
#include <string.h>
char stack[50];
int top = -1;
void push(char s)
{
    top++;
    stack[top] = s;
}
char pop()
{
    char s;
    s = stack[top];
    top--;
    return s;
}
void main()
{
    char str1[50], str2[50];
    int len, count = 0;
    printf("\nenter expresion\n");
    scanf("%s", &str1);
    len = strlen(str1);
    printf("\n%d\n",len);
    printf("\n%s\n",str1);
    
    getch();
}