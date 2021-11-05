#include <stdio.h>
int main()	
{	
    char str[10]="...name...";
    printf("current name : %s\n",str);
    printf("enter a name\n");
    scanf("%s",str);
    printf("name : %s \n ",str);
    return 0;
} 