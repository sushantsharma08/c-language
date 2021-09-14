//sum of all natural numbers by whileLoop
#include <stdio.h>
int main()	
{	
    int n,i=1,sum=0;
    printf("Enter a number whose sum will be printed through all natural numbers: ");
    scanf("%d",&n);
      
    while(i<=n){
        sum += i;
        i++;
    }
    printf("sum of all natural numbers till %d is  %d",n,sum);
    
    return 0;
}