// prog to show a array of n size print its value and sum of its values
#include <stdio.h>
int main()	
{	
   int n, array[n], i,sum=0;
   printf("enter the range of array : ");
   scanf("%d",&n);
   for(i=0 ; i<n ; i++)
   {
       scanf("%d",&array[i]);
   }  
   for ( i = 0; i < n ;i++)
   {
       printf("array[%d] : %d\n",i,array[i]);
   }
   for ( i = 0; i < n; i++)
   {
       sum += array[i]; 
       
   }
   printf("sum of all values of array : %d\n",sum);
   
    return 0;
}