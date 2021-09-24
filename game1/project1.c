#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()	
{	
    int number,nguesses=1,guess;
    srand(time(0));
    number = rand()%100+1;
    printf(" the number is %d\n",number);
    
    do
    {
        printf("Enter a Number: ");
        scanf("%d",&guess);
        if (number>guess)
        {
            printf("higher number please\n");
            
        }
        else if(number<guess)
        {
            printf("lower number please\n");
        }
        else{
                printf("You guessed it in %d attempts",nguesses);
        }
    nguesses++;
    } while (number!=guess);
    
    return 0;
}