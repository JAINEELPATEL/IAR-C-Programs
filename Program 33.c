// STRING
// Program to check whether the person can enter the palace or not
#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
void main()
{
    char masterlist[6][10]={
        "akshay",
        "prag",
        "raman",
        "shrinivas",
        "gopal",
        "rajesh"
    };
    int i,flag,a;
    char yourname[10];
    printf("\nEnter you name : ");
    scanf("%s",yourname);
    flag=NOTFOUND;
    for(i=0;i<=5;i++)
    {
        a=strcmp(&masterlist[i][0],yourname);
        if(a==0)
        {
            printf("Welcome,you can enter the palace");
            flag=FOUND;
            break;
        }
    }
    if(flag==NOTFOUND)
    printf("Sorry,you are a treaspasser");
}