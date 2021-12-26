// 1D Array
// Find factorial of 5 numbers(with argument & no return and array)
#include<stdio.h>
void fac(int x);
void main()
{
    long int x[5],i,y,m=1;
    for(i=0;i<5;i++)
    {
        printf("Enter the value of x[%ld] : ",i);
        scanf("%ld",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        fac(x[i]);
    }
}
void fac(int x)
{
    int i,y,m;
    m=1;
    for(y=1;y<=x;y++)
    {
        m=m*y;
        printf("%ld*",y);
    }
    printf("\nThe Factorial of %ld : %ld\n",x,m);
}