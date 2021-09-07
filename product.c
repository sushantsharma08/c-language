#include <stdio.h>
int main()
{
    int length, breadth;
    printf("enter the value for length of the rectangle:\n");
    scanf("%d", &length);
    printf("enter the value of breadth of the rectangle:\n");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("area of a rectangle with given parameters will be: %d", area);
    return 0;
}