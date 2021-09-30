#include <stdio.h>
int fibonacci(int x);
int main()	
{	
    int a,i=0;
    printf("Enter the number of terms : ");
    scanf("%d",&a);
    printf("fibonacci series : ");
    for( i ; i<a ; i++){
        printf("%d ",fibonacci(i));
    }
    
    return 0;
}
int fibonacci(int x){
      if(x==0 || x==1){
          return x;
      }
      else{
          return fibonacci(x-1) + fibonacci(x-2);
      }
}