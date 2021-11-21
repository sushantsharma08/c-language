#include <stdio.h>
#include<string.h>

struct employee
{
    float salary;
    int code;
    char name[20];
    };

int main()	
{	
    struct employee E1;  //this makes a variable E1
    struct employee *ptr;  // this point to a variable of structure named employee
    ptr=&E1;
    // (*ptr).code=101;
    ptr->code=101;   // both are same shit
    printf("Code is %d",E1.code);
    
    return 0;
}