// 3D Array
// Addition and Subtraction of 3D Array
#include<stdio.h>//header file
void main()
{
    int x[3][3][3],y[3][3][3],z[3][3][3],i,j,k;
    
    printf(“Enter the elements of the first matrix -\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter value of x[%d][%d][%d] : ",i,j,k);
                scanf("%d",&x[i][j][k]);
            }
        }
    }
    
    printf(“\nEnter the elements of the second matrix -\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter value of [%d][%d][%d]: ",i,j,k);
                scanf("%d",&y[i][j][k]);
            }
        }
    }
    
    printf(“\nAddition is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                z[i][j][k]=x[i][j][k]+y[i][j][k];
                printf("%d\t",z[i][j][k]);
            }printf("\n");
        }printf("\n");
    }printf("\n");
    
    printf(“\nSubtraction is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                z[i][j][k]=x[i][j][k]-y[i][j][k];
                printf("%d\t",z[i][j][k]);
            }printf("\n");
        }printf("\n");
    }printf("\n");
}