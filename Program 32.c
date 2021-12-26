// STRING
// strcmp() using library(use to compare two strings)
#include<stdio.h>
#include<string.h>
void main()
{
    char x[]="JAINEEL";
    char y[30]="PATEL";
    int i,j,k;
    i=strcmp(x,"JAINEEL");
    j=strcmp(x,y);
    k=strcmp(x,"JAINEEL hi");
    printf("\n%d %d %d",i,j,k);
}