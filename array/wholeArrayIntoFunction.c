//passing whole array into function
#include <stdio.h>
int func(int value[]);
int main()	
{	
    int i,j,n,array[6]={1,2,3,4,5,6};
    // printf("Enter the size of array");
    // scanf("%d",&n);
    // printf("Enter the elements of array : \n");
    for ( i = 0; i < 6 ; i++)
    {
        // scanf("%d",&array[i]);
        printf("array[%d] : %d\n",i,array[i]);
    }
    func(array);
    for ( i = 0; i < 6 ; i++)
    {
        // scanf("%d",&array[i]);
        printf("array[%d] : %d\n",i,array[i]);
    }
    return 0;
}
int func(int value[]){
    int i,a,sum=0;
    for ( i = 0; i < 6; i++)
    {
        value[i]=value[i]*value[i];
        sum += value[i];
    }
    printf("the sum of square of num is : %d \n",sum);
}