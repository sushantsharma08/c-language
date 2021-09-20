#include <stdio.h>
int main()	
{	
    int i,j,x,y;
     printf("Enter the value of x and y and j till y will be printed under i till x  :  ");
     scanf("%d %d",&x,&y);
     for ( i = 1; i <=x; i++)
     {
         printf("\n\ni=%d\n",i);
           for (j = 1; j <= y; j++)
           {
               printf("j=%d\t",j);
           }  
     }
    return 0;
}