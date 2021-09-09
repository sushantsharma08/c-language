#include <stdio.h>
// #include <math.h>
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);
    printf("the divisibility test returns: %d\n", num % 97);
    return 0;
}