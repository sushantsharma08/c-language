#include <stdio.h>
int check(int num);
int main()	
{	
    int i,j,n,array[n];
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        check(array[i]);
    }
    return 0;
}
int check(int num)
{
    if (num%2==0)
    {
        printf("\nit is a even number !!!\n");
    }
    else
    {
        printf("\nit is a odd number !!!\n");
    }
    
    
}