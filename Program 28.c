// STRING
// strlen() using user define(use to calculate length of character)
#include<stdio.h>
#include<string.h>
xstrlen (char *s);
void main()
{
    char name[]="JAINEEL";
    int x,y;
    x=strlen(name);
    y=strlen("PATEL");
    printf("string=%s length=%d",name,x);
    printf("\nstring=%s length=%d","PATEL",y);
}
xstrlen (char *s)
{
    int length =0;
    while(*s!='\0')
    {
        length++;
        s++;
    }
    return(length);
}