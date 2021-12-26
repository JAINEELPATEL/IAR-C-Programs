// Loop 1 while loop
// Write a program to generate multiplication table. [1 to 10]
#include <stdio.h>
void main()
{
    int a,i=1,m=1;
    printf("Enter the no ");
    scanf("%d",&a);
    do
    {
        m=a*i;
        printf("\n %d * %d = %d",a,i,m);
        i++;
    }while(i<=10);
}