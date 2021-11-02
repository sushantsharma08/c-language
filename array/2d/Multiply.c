#include <stdio.h>
int main()	
{	
    int i,j,k,m1=2,n1=3,m2=n1,n2=4,m3,n3,array1[m1][n1],array2[m2][n2],array3[m1][n2];
        printf("Enter the elements of first array (row-wise): \n");
    for ( i = 0; i < m1; i++)
    {
        for(j=0 ; j < n1 ; j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
     printf("your first matrix is : \n");
    for ( i = 0; i < m1; i++)
    {
        printf("\n");
        for(j=0 ; j < n1 ; j++)
        {
            printf(" %d ",array1[i][j]);
        }
    }
    printf("\nEnter the elements of second array (row-wise): \n");
    for ( i = 0; i < m2; i++)
    {
        for(j=0 ; j < n2 ; j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
     printf("\nyour second matrix is : \n");
    for ( i = 0; i < m2; i++)
    {
        printf("\n");
        for(j=0 ; j < n2 ; j++)
        {
            printf(" %d ",array2[i][j]);
        }
    }
    //Multiplication
    for ( i = 0; i < m1; i++)
    {
        for ( j = 0; j < n2 ; j++)
        {
            array3[i][j]=0;
            for ( k = 0; k < n1; k++)
            {
                array3[i][j] += array1[i][k] * array2[k][j];
            }
            
        }
        
    }
    printf("the resultant matrix is : \n");
    for ( i = 0; i < m1; i++)
    {
        printf("\n");
        
        for(j=0 ; j < n2 ; j++)
        {
            printf(" %d ",array3[i][j]);
        }
    }
    
    
    return 0;
}