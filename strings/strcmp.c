#include <stdio.h>
#include<string.h>
int main()	
{	
    char str1[10],str2[10];
    int compare;
    printf("Enter the first string : ");
    scanf("%s",&str1);
    printf("Enter the second string : ");
    scanf("%s",&str2);
    printf(" comparing between two strings...\n");
    compare=strcmp(str1,str2);
    if(compare==0)
    {
        printf("strings are equal");
    }
    else if(compare>0)
    {
        printf("First string is greater than second string");
    }
    else
    {
        printf("string 2 is greater than string 1");
    }
    return 0;
}
