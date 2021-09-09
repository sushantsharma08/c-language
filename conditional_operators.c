
// condition ? expression-if-true : expression-if-flase
// also caller ternary op.
#include <stdio.h>
int main()	
{	
    int a;
    printf("enter a\n");
    scanf("%d",&a);

    (a<5) ? printf("a is less than 5!") : printf("a is not less than 5!");
    return 0;
}