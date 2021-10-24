#include <stdio.h>
int main()	
{	
    int i,n,A[n],sum;
    sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("Sum of elements of array is : %d",sum);
    
    
    return 0;
}