#include <stdio.h>
int main()	
{	
    int a,b,sum;
    printf("enter the value of a \t");
    scanf("%d",&a);
    printf("enter the value of b \t");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of thy is : %d and the address of memory is %u",sum,&sum);
    return 0;
}