#include <stdio.h>
int Sum(int n);
int main()	
{	
    int a;
    printf("enter the number of terms : ");
    scanf("%d",&a);
    printf("sum till %d terms is %d",a,Sum(a));
    
    return 0;
}
int Sum(int n){
    int result=0,i=0;
    for ( i ; i <= n ; i++)
    {
        result += i;
    }
   return result;
}