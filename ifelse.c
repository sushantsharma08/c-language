// code to check whether the given number is even or not.
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a number:\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is a even number!\n", a);
    }
    else
    {
        printf("%d is a odd number!\n", a);
    }

    return 0;
}