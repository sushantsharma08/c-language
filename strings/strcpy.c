#include <stdio.h>
#include <string.h>
int main()	
{	
    char *str="this";
    char str2[40];
    // strcpy(target,source);
    strcpy(str2,str);
    printf(" now str2 is %s",str2);
    
    return 0;
}