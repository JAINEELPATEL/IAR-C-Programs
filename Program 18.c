// Function 3 method
// using no argument & with return value
// Any integer is input through the keyboard. Write a program to find out all its divisors.
#include<stdio.h>
int d();
void main()
{
    d();
}
int d()
{
    int x,i;
    printf("Inpt an integer : ");
    scanf("%d",&x);
    printf("All the divisor of %d : ",x);
    for(i=2;i<=x;i++)
    {
        if((x%i)==0)
        {
        printf("%d, ",i);
        }
    }
    return(0);
}