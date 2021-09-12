#include <stdio.h>
int main()	
{	
    int a=0;
    printf("Enter 0 to print values for a from 10 to 20.\n a:");
    scanf("%d",&a);

     while (a<=20)
    {
        if (a>=10)
        {
            printf("%d\n",a);
        }
        
                a++;
    }
    return 0;
}