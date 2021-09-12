// n natural numbers in reverse order
#include <stdio.h>
int main()	
{	
   int n,i;

    printf("INPUT:");
    scanf("%d",&n);

    for(i=n;i;i--) {
        printf("%d\n",i);
    }
    printf("these were all the natural numbers upto %d in reverse order",n);
    return 0;
}