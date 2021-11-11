#include <stdio.h>
int length(char *ptr){
    char *str = ptr;
    int length=0;
    while (*str!='\0')
    {
         length++;
         str++;
    }
    return length;
}


int main()	
{	
    char *str="start";
    int l = length(str);
    printf(" the length of string is %d",l);  
    return 0;
}