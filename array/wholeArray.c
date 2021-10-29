#include <stdio.h>
int main()	
{	
    int i,n,a[n];
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
        printf("sum of elemts of array is : %d",sum(a, *&n));
    return 0;
} 
int sum(int array[], int n){
    int i,sum=0;
    for ( i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}