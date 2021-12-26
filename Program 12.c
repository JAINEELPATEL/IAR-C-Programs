// Loop 3 do while loop
// Write a program to display sum of first 10 natural numbers.
#include<stdio.h>  
void main()  
{
    int i=1,sum=0;
    printf("First 10 natural numbers are ");
    do
    {
        sum=sum+i;
        printf("%d ",i);
        i++;
    }while(i<=10);
    printf("\nSum is %d",sum);
}