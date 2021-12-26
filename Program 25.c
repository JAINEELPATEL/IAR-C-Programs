// POINTER
// Pointer 2 using with argument with return and pointer
// If a five-digit number is input through the keyboard, Write a program to obtain the reverse number & determine whether the original & reversed numbers are equal or not.
#include<stdio.h>
int sum(int *n);
void main()
{
    int n,a;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=sum(&n);
    if(a==1)
    printf("\nNumber are equal");
    else
    printf("\nNumber are not equal");
    
}
int sum(int *n)
{
    int rem,rev=0,x;
    x=*n;
    for(;*n>0;)
    {
        rem=*n%10;
        rev=(rev*10)+rem;
        *n=*n/10;
    }
    printf("Reverse is %d",rev);
    if(rev==x)
    return(1);
    else
    return(2);
}