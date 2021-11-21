#include<stdio.h>
#include<string.h>

struct employee
{
    float salary;
    int code;
    char name[20];
    };

int main(){
      
      struct employee A = {8.339, 300, "A"};

      printf("employee salary is %.2f \n",A.salary);
      printf("employee code is %d \n",A.code);
      printf("employee name is %c \n",A.name);
      return 0;
}