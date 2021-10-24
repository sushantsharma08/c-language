#include <stdio.h>
int main()	
{	
    int n,array[n],i;
    int min=0,max=0;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the following elemets of array : \n");
    for( i=0 ; i<n ; i++)
    {
      printf("array[%d] : ",i);
      scanf("%d",&array[i]);
    }
    min=max=array[0];
    for ( i = 0; i < n; i++)
    {
        if (array[i]<min)
          min=array[i];
      if (array[i]>max)
          max=array[i];
    }
    printf("The element having maximum value is : %d ",max);
    printf("The element having minimum value is : %d",min);
    return 0;
}