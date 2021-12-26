// Loop 3 do while loop
// Write a program to print Fibonacci series. The first n terms of Fibonacci numbers are 1,1,2,3,5,8,13,...
#include<stdio.h>
void main()
{
    int i=1,e,p=0,c=1,n=0;
    printf("Enter number of terms ");
    scanf("%d",&e);
    do
    {
        p=c;
        c=n;
        n=p+c;
        printf("%d,",n);
        i++;
    }while(i<=e);
}