#include <stdio.h>
int main()	
{	
    int i, j, k, l, m, n;
printf("Enter a value : ");
scanf("%d", &n);
printf("\n");
for (i = 1; i <= n; i++)                       //upper part
{
    for (j = i; j <= n; j++)
    {
        printf(" ");
    }
    for (k = 1; k <= i; k++)
    {
        printf("*");
    }
    for (l = 2; l <= i; l++)
    {
        printf("*");
    }
    for (k = i; k <= n; k++)
        {
            printf(" ");
        }
    for (l = i; l <= n - 1; l++)
        {
            printf(" ");
        }
    for (k = 1; k <= i; k++)
    {
        printf("*");
    }    
    printf("\n");
}
for (i = 1; i <= n; i++)                    //lower part
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= n; k++)
        {
            printf("*");
        }
        for (l = i; l <= n - 1; l++)
        {
            printf("*");
        }
        for (k = 1; k <= i; k++)
        {
        printf(" ");
        }
        for (l = 2; l <= i; l++)
        {
        printf(" ");
        }
        for (k = i; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}