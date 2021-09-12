//first n natural numbers
#include <stdio.h>
int main()	
{	
    int n;
     printf("INPUT:");
     scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
    
    printf("these were all the natural numbers upto %d",n);
    return 0;
}