#include <stdio.h>
int main()	
{	
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);

    if (year%400==0 && year%4==0)
    {
         printf("%d is a LeapYear!",year);
    }
    else if (year%100==0)
    {
         printf("%d is not a LeapYear!",year);
    }
    else
    {
         printf("%d is not a LeapYear!",year);
    }
    
    
    return 0;
}