#include <stdio.h>
void op(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg= (a+b)/2;
}
int main()	
{	
     int i,j,sum;
     float avg;
     printf("Enter the value of i : ");
     scanf("%d",&i);
     printf("Enter the value of j : ");
     scanf("%d",&j);
     op(i, j, &sum, &avg);
     printf("sum of following numbers is : %d \n",sum);
     printf("average of following numbers is : %f \n",avg);
    return 0;
}