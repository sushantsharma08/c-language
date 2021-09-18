#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()	
{	
    int number,n;
    srand(time(0));
    number = rand();
    printf(" the number is %d\n",number);
    printf("ENter a Number: ");
    scanf("%d",n);
    if (n<=(number+100) || n>=(number+100))
    {
        printf("too far try again");
    }
    else if (n=number)
    {
        printf("your guess is right");
    }
    return 0;
}