// Loop 1 while loop
// 1 If a five- digit number is input through the keyboard, write a program to calculate the sum of its digit.
#include<stdio.h>  
void main()    
{
    int n,s=0,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("Sum = %d",s);
}