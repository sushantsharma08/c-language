#include <stdio.h>
int main()	
{	
     int a,b,operation;
     char op;

     printf("Enter + to ADD\n");
     printf("Enter - to SUBSTRACT\n");
     printf("Enter * to MULTIPLY\n");
     printf("Enter / to DIVIDE\n");
     printf("Enter %% to REMINDER\n"); 
     printf("Enter the values of as ' a Operator b: ' ");
     scanf("%d%c%d",&a,&op,&b);
     switch (op)
     {
     case '+' :
         printf("addition of the two numbers is : %d",a+b);
         break;
     case '-' :
         printf("substraction of the two numbers is : %d",a-b);
         break;
     case '*' :
         printf("multiplication of the two numbers is : %d",a*b);
         break;
     case '/' :
         printf("division of the two numbers is : %d",a/b);
         break;
     case '%' :
         printf("remainder of the two numbers is : %d",a%b);
         break;
     
     default:
          printf("invalid choice");
         break;
     }
    return 0;
}