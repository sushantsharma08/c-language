#include <stdio.h>
int main()	
{	
    int i,j,m=3,n=3,array1[m][n],array2[m][n],array3[m][n];
    printf("Enter the elements of first array (row-wise): \n");
    for ( i = 0; i < m; i++)
    {
        for(j=0 ; j < n ; j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
     printf("your first matrix is : \n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for(j=0 ; j < n ; j++)
        {
            printf(" %d ",array1[i][j]);
        }
    }
    printf("\nEnter the elements of second array (row-wise): \n");
    for ( i = 0; i < m; i++)
    {
        for(j=0 ; j < n ; j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
     printf("\nyour second matrix is : \n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for(j=0 ; j < n ; j++)
        {
            printf(" %d ",array2[i][j]);
        }
    }
    for ( i = 0; i < m; i++)
    {
        for(j=0 ; j < n ; j++)
        {
            
    array3[i][j]=array1[i][j] + array2[i][j];
        }
    }
     printf("\nyour final matrix is : \n");
    for ( i = 0; i < m; i++)
    {
        printf("\n");
        for(j=0 ; j < n ; j++)
        {
            printf(" %d ",array3[i][j]);
        }
    }

    
    return 0;
}