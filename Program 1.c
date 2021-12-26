// A company insures its drivers in the following cases: 
// − If the driver is married. 
// − If the driver is unmarried, male & above 30 years of age. 
// − If the driver is unmarried, female & above 25 years of age. 
// In all other cases the driver is not insured. If the marital status, sex and age of the driver are the inputs, write a program to determine whether the driver is to be insured or not. 
// Method 1- Not using logical operator
#include <stdio.h>
void main()
{
    char ms,s;
    int a;
    printf("Enter your Marital Status , Sex, Age");
    scanf("%c %c %d",&ms,&s,&a);
    if(ms=='M')
          printf("Driver is insured");
    else
    {
        if(s=='M')
        {
            if(a>30)
            printf("Driver is insured");
            else
            printf("Driver is not insured");
        }
        else
        {  if(a>25)
            printf("Driver is insured");
            else
            printf("Driver is not insured");
        }
    }
}