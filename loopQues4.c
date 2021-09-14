//sum of all natural numbers by ForLoop
#include <stdio.h>
int main()	
{	
    int n,i=1,sum=0;
    printf("Enter a number whose sum will be printed through all natural numbers: ");
    scanf("%d",&n);
      
    for(i;i<=n;i++){
        sum += i;
        
    }
    printf("sum of all natural numbers till %d is  %d",n,sum);
    
    return 0;
}