// Pattern 1
#include<stdio.h>
void main()
{
    int r,c,n,s,x;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        x=65;
        for(c=n;c>=r;c--)
        {
            printf("%c",x++);
        } 
        for(s=1;s<r;s++)
        {
            printf("  ");
        }
        for(c=x-1;c>=65;c--)
        {
            printf("%c",c);
        }
        printf("\n");
    }
}