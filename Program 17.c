// Function 2 method
// using with argument & no return
// Write a program to print all the ASCII values and equivalent characters using a while loop.The ASCII values vary from 0 to 255.
#include<stdio.h>
void print(int x,int y);
void main()
{
    int s,e;
    printf("Enter the range ");
    scanf("%d%d",&s,&e);
    print(s,e);
}
void print(int x,int y)
{
    char i;
    i=x;
    for(;i<=y;i++)
    {
        printf("\n%d = %c",i,i);
    }
}