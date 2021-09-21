#include <stdio.h>
int main()	
{	
    int i, j, k,n,y=3;
    printf("Enter the value of elements at base : ");
    scanf("%D",&n);
    printf("\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf(" ");
        }
        for ( k = i; k <=n ; k++)
        {
            printf("+");
        }
        
            printf("\n");
    }
    
    return 0;
}