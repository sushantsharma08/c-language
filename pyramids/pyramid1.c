#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of elements on base : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) //loop for no of lines
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}