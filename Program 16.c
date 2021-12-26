// Function 1 method
// using no argument & no return
// Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
#include <stdio.h>
void check();
void main()
{
    check();
}
void check()
{
    char s;
    int i;
    printf("Enter any character : ");
    scanf("%c",&s);
    i=s;
    if(i>=65&&i<=90)
    printf("Upper Case Character");
    else if(i>=97&&i<=122)
    printf("Lower Case Character");
    else if(i>=48&&i<=57)
    printf("Numerical Character");
    else
    printf("Special Character");
}