#include <stdio.h>
int main()	
{	
    int i,temp,j,n,A[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("Enter the size of array : ");
    // scanf("%d",&n);
    // printf("Enter the elements of array : \n");
    // for ( i = 0; i < n ; i++)
    // {
    //     scanf("%d",&A[i]);
    // }
    for( i = 0 , j = 9 ; i < j ; i++ , j--)
    {
        temp = A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("elements of array after reversing are : \n");
    for ( i = 0; i < 10 ; i++)
    {
        printf("array[%d] : %d \n",i,A[i]);  
    }  
    return 0;
}