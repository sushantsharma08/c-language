//table of 10 in reverse order
#include <stdio.h>
int main()	
{	
    int n=10,i,result;
     //printf("Enter a number whose table you want:  ");
     //scanf("%d",&n);
      
      for(i=n;i;i--){
          result=n*i;
          printf("%d * %d = %d\n ",n,i,result);
      }    
    return 0;
}