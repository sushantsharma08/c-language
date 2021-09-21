#include <stdio.h>
int main()	
{	
    int n,i,j;
    printf("Eter the no of elements on base of reversed pyramid : ");
    scanf("%D",&n);

    for(i=n;i>0;i--)
     {
         for (j=i; j>0; j--)
         {
             printf("*");
         }
         printf("\n");
     }
    
    return 0;
}