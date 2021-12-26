// Loop 3 do while loop
// Write a program to print a sum of first N even numbers. Eg.=2+4+6+8+...+ N
#include <stdio.h>
void main()
{
    int i=2,j,s=0;
    printf("Enter the value of n ");
    scanf("%d",&j);
    printf("Sum of ");
    do
    {
        if(i%2==0)
        {
            s=s+i;
            printf("%d ",i); 
        }
        i++;
        
    }while(i<=j);
    printf(" is %d",s);
}