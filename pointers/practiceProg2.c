#include <stdio.h>
void printAddress(int a);
int main()	
{	
    int i=4;   
    printf("the value of i is : %d\n",i);
    printAddress(&i);
    printf("the address of i is : %u\n",&i);
    return 0;
}
void printAddress(int a)
{
    printf("the address of a is : %u\n",a);
}