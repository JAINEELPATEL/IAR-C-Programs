// Loop 2 for loop
// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another number. Ex 3^2=9
#include<stdio.h>
void main()
{
    long int x,y,a=1,i;
    printf("Enter value of x and y ");
    scanf("%ld %ld",&x,&y);
    for(i=1;i<=y;i++)
    {
        a=a*x;
    }
    printf("%ld^%ld=%ld",x,y,a);
}
