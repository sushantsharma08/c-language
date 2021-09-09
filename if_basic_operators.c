#include <stdio.h>
int main()	
{	
    int age;
    printf("enter your age:\n");
    scanf("%d",&age);
     if(age<=90)
     {
        printf("you can drive!");
     }
     else{
         printf("you cannot drive!");
     }
    
    return 0;
}