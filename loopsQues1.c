//table of any number given by the user
#include <stdio.h>
int main()	
{	
    int n,i=1,result;
     printf("Enter a number whose table you want:  ");
     scanf("%d",&n);
      
      for(i;i<=10;i++){
          result=n*i;
          printf("%d * %d = %d\n ",n,i,result);
      }    
    return 0;
}