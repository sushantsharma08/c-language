#include <stdio.h>
int main()	
{	
    int i=5;
    printf("Enter the value of i:");
    scanf("%d",&i);
    printf("the value of i is: %d\n",i);
    printf("the value of ++i is: %d\n",++i);
    printf("the value of i++ is: %d\n",i++);
    printf("the value of i-- is: %d\n",i--);
    printf("the value of --i is: %d\n",--i);
    i+=10; // increses i by 10
    printf("the value of i+=10 is: %d\n",i);
    i-=10; // decreses i by 10
    printf("the value of i-=10 is: %d\n",i);
    i*=5; // i times 10
    printf("the value of i*=5 is: %d\n",i);
    i%=5; //  i divided by 10
    printf("the value of i divided by 5 is: %d\n",i);
    return 0;
}