#include <stdio.h>
int main()
{
    int choice, a, b;
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
            printf("\n\n the sum of given two numbers is : %d\n\n ", a + b);
            break;
        case 2:
            printf("\n\n the substraction of given two numbers is : %d\n\n ", a - b);
            break;
        case 3:
            printf("\n\n the multiplication of given two numbers is : %d\n\n ", a * b);
            break;
        case 4:
            printf("\n\n the division of given two numbers is : %d\n\n ", a / b);
            break;
        case 5:
            printf("\n\n the remainder of given two numbers is : %d\n\n ", a % b);
            break;
        case 6:
            exit(1);
        default:
            printf("\n\n Invalid choice!\n\n ");
            break;
        }
    }
    return 0;
}