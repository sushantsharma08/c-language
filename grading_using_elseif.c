#include <stdio.h>
int main()	
{	
    int percentage;
    printf("Enter the final percentage:\n");
    scanf("%d",&percentage);

    if (percentage<=100 && percentage>=80)
    {
        printf("GRADE A!");
    }
    else if (percentage<80 && percentage>=70)
    {
        printf("GRADE B!");
    }
    else if (percentage<70 && percentage>=60)
    {
        printf("GRADE C!");
    }
    else if (percentage<60 && percentage>=50)
    {
        printf("GRADE D!");
    }
    else if (percentage<50 && percentage>=44)
    {
        printf("GRADE E");
    }
    else if (percentage<44 && percentage>=0)
    {
        printf("GRADE F!");
    }
    
    
    return 0;
}