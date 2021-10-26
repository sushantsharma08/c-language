#include <stdio.h>
int main()	
{	
    int i,j,n,array[n];
    printf("ENter the size of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array elements stored !!!\n\n");
    printf("enter the element you want to search : ");
    scanf("%d",&j);
    for ( i = 0; i < n; i++)
    {
        if (j==array[i])
        {
            printf("%d found at %d position of array at array[%d]\n",array[i],i+1,i);
            break;
        }
    }
    if(i==n && array[i]!=j)
        {
            printf("%d not found in the array .\n",j);
        }    
    return 0;
}