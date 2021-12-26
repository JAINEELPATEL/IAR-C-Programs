// STRING
// strlen() using library(use to calculate length of character)
#include<stdio.h>
#include<string.h>
void main()
{
    char name[]="JAINEEL";
    int x,y;
    x=strlen(name);
    y=strlen("PATEL");
    printf("string=%s length=%d",name,x);
    printf("\nstring=%s length=%d","PATEL",y);
}