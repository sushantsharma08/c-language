#include <stdio.h>    
int main()    
{    
    int m=6,n=3,arr[m][n],i,j;  
    // printf("enter thr number of rows : ");
    // // scanf("%d",&m);   
    // // printf("enter thr number of columns : ");
    // // scanf("%d",&n);   
    for (i=0;i<m;i++)    
    {    
        for (j=0;j<n;j++)    
        {    
            printf("Enter a[%d][%d]: ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<m;i++)    
    {    
        printf("\n");    
        for (j=0;j<n;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }   
    } 
	return 0;   
} 