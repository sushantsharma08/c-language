#include <stdio.h>
int factorial(int x);
int main()	
{
    int a;	
    printf("enter the value whose factorial is required : ");
    scanf("%d",&a);
    factorial(a);
    printf("\n\nfactorial of %d is %d.",a,factorial(a));
    return 0;
}
int factorial(int x){
    printf("calling factorial (%d)\n",x);
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x* factorial(x-1);
    }
}