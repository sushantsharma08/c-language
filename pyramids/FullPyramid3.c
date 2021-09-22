#include <stdio.h>
int main()	
{	
    int i,j,k,l,m,n;
    printf("Enter a value : ");
    scanf("%D",&n);
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("0");
        }
        for ( l = 2; l <= i; l++)
        {
            printf("0");
        }
        
        printf("\n");
    }
       
    
    return 0;
}