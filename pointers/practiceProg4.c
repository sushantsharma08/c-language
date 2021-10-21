#include <stdio.h>
void op(int *a, int *b){
    int sum , avg;
    sum= *a+*b;
    avg= (*a+*b)/2;
    printf("sum of following numbers is: %d\n",sum);
    printf("average of following numbers is: %d\n",avg);
}
int main()	
{	int x, y;
    // printf("values of x and y are %d and %d \n",x,y);
    printf("Enter the value of x :  ");
    scanf("%d",&x);
    printf("Enter the value of y :  ");
    scanf("%d",&y);
    op(&x, &y);
    return 0;
}