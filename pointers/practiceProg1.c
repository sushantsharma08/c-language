#include <stdio.h>
int main()	
{	
    int a=5;
    printf(" the value of a is %d \n",a);
    printf(" the address of a is %u \n",&a);
    printf(" the value stored in the above address is %u \n",*(&a));
    
    return 0;
}