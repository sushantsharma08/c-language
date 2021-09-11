#include <stdio.h>
int main()	
{	
    char ch;
     printf("Ener a alphabet:\n ");
     scanf("%c",&ch);

     if (ch>='a' && ch<='z')
     {
        printf("Enered alphabet '%c' is a lowercase  ",ch);
     }
     else if (ch>='A' && ch<='Z')
     {
        printf("Enered alphabet '%c' is a uppercase  ",ch);
     }
     else
     {
        printf("Enered alphabet '%c' is a undefined  ",ch);
     }
     
    
    return 0;
}