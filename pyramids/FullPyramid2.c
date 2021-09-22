#include <stdio.h>
int main()	
{
    int i,j,k,n;
    printf("Enter a value : ");
    scanf("%D",&n);
    printf("\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = i; j <= n-1; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("+");
        }
        
            printf("\n");
    }

    for ( i = 1; i <= n-1 ; i++)
    {
        for ( j = 1 ; j <= i; j++)
        {
            printf(" ");
        }
        for ( k = i; k <= n-1; k++)
        {
            printf("+");
        }
        
        
            printf("\n");
    }
    
    
    
    
    return 0;
}