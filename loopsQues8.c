#include <stdio.h>
int main()	
{	
    int n,i;
    printf("Enter a number to check whether its prime or not: ");
    scanf("%d",&n);

    for ( i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            printf("Given number is not a prime number");
            break;
        }
        else
        {
            printf("Given number is a prime number");
            break;
        }
        
    }

      if (n==1)
      {
          printf("Given number is a prime number");
            
      }
      
    return 0;
}