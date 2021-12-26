// Function 4 method
// using with argument & with return value
// Program for pass
#include<stdio.h>
int result(int a,int b,int c,int d,int e);
void main()
{
    int a,b,c,d,e,x;
    printf("Enter 5 subject marks : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=result(a,b,c,d,e);
    if(x==1)
    printf("\nYou pass with DISTINTION!!!");
    else if(x==2)
    printf("\nYou pass with FIRST CLASS!!!");
    else if(x==3)
    printf("\nYou pass with SECOND CLASS!!!");
    else if(x==4)
    printf("\nYou pass with PASS CLASS!!!");
    else
    printf("\nBETTER LUCK NEXT TIME");
}
int result(int a,int b,int c,int d,int e)
{
    int t,g;
    t=a+b+c+d+e;
    g=t/5;
    if(g>=70)
    return(1);
    if(g>=60&&g<70)
    return(2);
    if(g>=50&&g<60)
    return(3);
    if(g>=40&&g<50)
    return(4);
    else
    return(5);
}