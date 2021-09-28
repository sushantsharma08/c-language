#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int remainder2(int a, int b);

int main()	
{	
    int a,b,choice;
    while (1)
    {
        printf("Enter 1 to ADD\n");
        printf("Enter 2 to SUBSTRACT\n");
        printf("Enter 3 to MULTIPLY\n");
        printf("Enter 4 to DIVIDE\n");
        printf("Enter 5 to REMAINDER\n");
        printf("Enter 6 to EXIT\n");
        printf("Enter the values of a and b : ");
        scanf("%d %d", &a, &b);
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            multiply(a, b);
            break;
        case 4 :
            divide(a, b);
            break;
        case 5 :
            remainder2(a, b);
            break;
        case 6 :
            exit(1);    
        default:
             printf("Invalid choice !");
            break;
        }
    }    
    return 0;
}

int sum(int a , int b){
    int result;
    result=a+b;
    printf("Sum of following numbers is : %d\n",result);
    return result;
}
int sub(int a , int b){
    int result;
    result=a-b;
    printf("Subtraction btw following numbers is : %d\n",result);
    return result;
}
int multiplication(int a , int b){
    int result;
    result=a*b;
    printf("multiplication of following numbers is : %d\n",result);
    return result;
}
int divide(int a , int b){
    int result;
    result=a/b;
    printf("Division btw following numbers is : %d\n",result);
    return result;
}
int remainder2(int a , int b){
    int result;
    result=a%b;
    printf("remainder of following numbers is : %d\n",result);
    return result;
}