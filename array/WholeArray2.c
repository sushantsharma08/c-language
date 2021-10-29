#include <stdio.h>
int main()	
{	
    int i,n,a[6]={1,2,3,4,5,6},b[7]={1,2,3,4,5,6,7},c[8]={1,2,3,4,5,6,7,8};
    printf("sum of all elements of array a is : %d \n",sum(a, 6));
    printf("sum of all elements of array b is : %d \n",sum(b, 7));
    printf("sum of all elements of array c is : %d \n",sum(c, 8));
    
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