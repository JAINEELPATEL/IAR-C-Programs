// Pattern 2
#include<stdio.h>
void main()
{
    int r,c,n,s,x;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
    
        for(c=n;c>=r;c--)
        {
            printf(" ");
        }
        for(s=1;s<r;s++)
        {
            printf("%d",s);
        }
        for(c=s-2;c>=1;c--)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}