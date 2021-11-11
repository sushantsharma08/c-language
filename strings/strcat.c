#include <stdio.h>
#include <string.h>
int main()	
{	
    char *st1="hello";
    char st2[10]=" sushant";
    strcat(st1,st2);
    printf("Now str1 is : %s", st1);
    return 0;
}