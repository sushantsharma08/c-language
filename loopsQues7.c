// factorial of a given number
#include <stdio.h>
int main()	
{	
    int i,n,factorial=1;
    printf("ENter a number whose factorial you want: ");
    scanf("%d",&n);

    for ( i=1; i <= n; i++)
    {
        factorial *= i;
    }
      printf("the Factorial of %d is %d",n,factorial);
    
    return 0;
}