// STRING
// strcat() using library(use to add two values/Appends one string at end of another)
#include<stdio.h>
#include<string.h>
void main()
{
    char x[]="JAINEEL";
    char y[30]="PATEL";
    strcat(y,x);
    printf("\nx = %s",x);
    printf("\ny = %s",y);
}