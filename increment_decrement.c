#include <stdio.h>
int main()	
{	
    int i=5;
    printf("Enter the value of i:");
    scanf("%d",&i);
    printf("the value of i is: %d\n",i);
    printf("the value of i++ is: %d\n",i++);
    printf("the value of ++i is: %d\n",++i);
    printf("the value of i-- is: %d\n",i--);
    printf("the value of --i is: %d\n",--i);
    
    return 0;
}