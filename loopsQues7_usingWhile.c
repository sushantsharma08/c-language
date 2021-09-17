#include <stdio.h>
int main()	
{
    int i=1,n,factorial=1;
     
    printf("ENter a number whose factorial you want: ");
    scanf("%d",&n);

    while (i<=n)
    {   
        factorial *= i;
        i++;
    }
      printf("the Factorial of %d is %d\n",n,factorial);

    return 0;
}