#include <stdio.h>
#include <string.h>
int main()	
{	
    char str[20];
    int length;
    printf("enter the string : ");
    scanf("%s",&str);
    length = strlen(str);
    printf("length of the string is %d",length);
    
    return 0;
}