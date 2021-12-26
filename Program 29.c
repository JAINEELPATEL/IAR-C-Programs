// STRING
// 1 strcpy() using library(use for transfer value)
#include<stdio.h>
#include<string.h>
void main()
{
    char source[]="Jaineel";
    char target[20];
    strcpy(target,source);
    printf("\nsource string=%s",source);
    printf("\ntarget sttring=%s",target);
}