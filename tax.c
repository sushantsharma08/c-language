#include <stdio.h>
int main()	
{	
    float tax,salary;

    printf("Enter your annual salary:");
    scanf("%f",&salary);
     
     if (salary<2.5)
     {
         printf("No tax on salary.");
     }
     else if(salary>=2.5 && salary<=5)
     {
        printf("tax is 5 percent on salary");
     }
     else if(salary>5 && salary<=7)
     {
         printf("tax is 7 percent on salary");
     }
     else if(salary>7 && salary<=11)
     {
         printf("tax is 10 percent on salary");
     }
     else
     {
         printf("tax is 20 percent on salary");
     }
     
     
     

    return 0;
}