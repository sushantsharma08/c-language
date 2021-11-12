#include <stdio.h>
void encode(char *ptr){
    char *str=ptr;
    while (*str != '\0')
    {
        *str=*str+1;
        str++;
    }
    return str;
}
int main()	
{	
    char *str;
    printf("Enter the code to be encrypted : ");
    gets(str);
    encode(str);
    printf("encoded message is : %s",str);    
    return 0;
}