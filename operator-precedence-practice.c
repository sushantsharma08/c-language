// step by step evaluation of 3*x/y-z+k
#include <stdio.h>
int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 -3+1
    // 2-3+1
    // 0
    printf("the value of result is :%d\n",result);
    return 0;
}