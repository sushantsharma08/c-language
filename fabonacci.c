#include <stdio.h>
int main()
{
    int x, y, z;
    int n, i;
    x = 0;
    y = 1;
    printf("Enteer the number of terms : ");
    scanf("%d", &n);
    printf("\n %d\t ", x);
    for (i = 2; i < n; i++)
    {
        z = x + y;
        printf("%d\t", z);
        x = y;
        y = z;
    }
    return 0;
}