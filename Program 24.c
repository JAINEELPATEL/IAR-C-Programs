// POINTER
// Pointer 1 using with argument no return and pointer
// Two numbers are input through the keyboard into two locations C & D. Write a program to interchange the contents of C &D.
#include<stdio.h>
void sum(int *a, int *b);
void main()
{
    int x,y;
    printf("Enter a : ");
    scanf("%d",&x);
    printf("Enter b : ");
    scanf("%d",&y);
    sum(&x,&y);
}
void sum(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("After swap a : %d\nAfter swap b : %d",*a,*b);
}