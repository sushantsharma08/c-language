#include <stdio.h>
#include <string.h>

typedef struct time
{
    int date,month,year;
}date;

void display(date A , date B){
    printf("first date is : %d/%d/%d\n",A.date,A.month,A.year);
    printf("second date is : %d/%d/%d\n",B.date,B.month,B.year);
}

int dateCmp(date A, date B){
    if (B.year>A.year)
    {
       return 1;
    }
    if (A.year>B.year)
    {
        return -1;
    }
    if (B.month>A.month)
    {
        return 1;
    }
    if (A.month>B.month)
    {
        return -1;
    }
    if (B.date>A.date)
    {
        return 1;
    }
    if (A.date>B.date)
    {
        return -1;
    }
    return 0;
}

int main()	
{	
 date d1= {2,11,2012};
 date d2= {2,11,2015};
 int a;

    display(d1,d2);
    dateCmp(d1,d2);
    a = dateCmp(d1,d2);
    // printf("the comparision returns : %d",a);
    if (a>0)
    {
        printf("second date is greater than first!");
    }
    else
    {
        printf("First date is greater than Second!");
    }
    
    
    return 0;
}