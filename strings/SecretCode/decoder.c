#include <stdio.h>
void decode(char *ptr){
    char *str=ptr;
    while (*str != '\0')
    {
        *str=*str-1;
        str++;
    }
    return str;
}
int main()	
{	
    char *str;
    printf("Enter the code to be decrypted : ");
    gets(str);
    decode(str);
    printf("Decoded message is : %s",str);    
    return 0;
}