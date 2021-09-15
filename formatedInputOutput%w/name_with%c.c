#include <stdio.h>
int main()	
{	
    char str1[10],str2[10];
    printf("Enter Your First Name :  ");
    scanf("%10s",str1);
    printf("Enter Your Last Name :  ");
    scanf("%10s",str2);
    
    printf("Full Name: %s %s",str1,str2);
    return 0;
}