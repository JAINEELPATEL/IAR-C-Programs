// Loop 2 for loop
// Write a program to find and print first N positive integers whose squares are palindromes. (Palindromes is one reads the same backwards as forwards) 
#include<stdio.h>  
void main()  
{
    int n,r,s,t,rev=0;
    printf("Enter the nummber : ");
    scanf("%d",&n);
    s=n*n;
    t=s;
    for(;s>0;)
    {
      r=s%10;
      rev=(rev*10)+r;
      s=s/10;
    }
    if(t==rev)
    printf("The number is palindrome number ");    
    else    
    printf("The number is not palindrome");
}
