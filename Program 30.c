// STRING
// strcpy() using user define(use for transfer value)
#include<stdio.h>
#include<string.h>
void xstrcpy(char *t,char *s);
void main()
{
    char source[]="JAINEEL";
    char target[20];
    xstrcpy(target,source);
    printf("\nsource string = %s",source);
    printf("\ntarget string = %s",target);
}
void xstrcpy(char *t,char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}