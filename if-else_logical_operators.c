#include <stdio.h>
int main()
{
    int age, vipPass=0;
    printf("enter your age:\n");
    scanf("%d", &age);
    if (age <= 90 && age>=18)
    {
        printf("you can drive!");
    }
    else
    {
        printf("you cannot drive!");
    }

    return 0;
}