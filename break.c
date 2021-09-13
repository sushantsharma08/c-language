// same code as doWhile loop  will add break here and stop code at 6
#include <stdio.h>
int main()	
{	
   int n=0;
   do{
        printf("%d\n",n);
        if (n==6)
        {
            break;                      // this breaks or stops the code at 6.
        }
        
        n++;
   }
   while (10>=n);
    return 0;
}