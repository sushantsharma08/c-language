#include <stdio.h>
int main()	
{	
   int input=1,n;
   printf("enter the no of natural numbers to be printed: ");
   scanf("%d",&n);
   printf("\nInput:%d\n",n);

   do{
        printf("%d\n",input);
        input++;
   }
   while (input<=n);
   
    printf("these were all the natural numbers upto %d",n);
    return 0;
}