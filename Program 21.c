// 2D Array
// Multiplication
#include <stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,sum = 0;
    int m1[10][10],m2[10][10],mul[10][10];
 
    printf("Enter number of rows of first matrix : ");
    scanf("%d",&r1);
    printf("Enter number of columns of first matrix : ");
    scanf("%d",&c1);
    printf("\tEnter elements of first matrix\n");
 
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
        {
            printf("\t\tEnter the value of m1[%d][%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter number of rows of second matrix : ");
    scanf("%d",&r2);
    printf("Enter number of columns of second matrix : ");
    scanf("%d",&c2);
 
    if (c1!=r2)
    printf("The multiplication isn't possible.\n");
    else
    {
        printf("\tEnter elements of second matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\t\tEnter the value of m2[%d][%d] : ",i,j);
                scanf("%d",&m2[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    sum=sum+m1[i][k]*m2[k][j];
                }
                mul[i][j]=sum;
                sum=0;
            }
        }
        printf("Product of the matrices:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}