#include <stdio.h>
void Wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()	
{	
    int x=3,y=4;
    printf(" value of x and y before Wrong_swap is x : %d  and y : %d \n",x,y);
    Wrong_swap(x, y);                  // here it does not work as function is called by value
    printf(" value of x and y before Wrong_swap is x : %d  and y : %d \n",x,y);
    printf(" value of x and y before swap is x : %d  and y : %d \n",x,y);
    swap(&x,&y);                      // here it works as function is called by reffrence to the address
    printf(" value of x and y before swap is x : %d  and y : %d \n",x,y);
    return 0;
}
void Wrong_swap(int a, int b)
{
  int temp;
  a=temp;
  a=b;
  b=temp;
}
void swap(int *a, int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}