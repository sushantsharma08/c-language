#include <stdio.h>
int main()	
{	
    int physics,chemistry,maths,english,physicalEducation,total,average,percentage;

     printf("Enter marks of physics:\n");
     scanf("%d",&physics);

     printf("Enter marks of chemistry:\n");
     scanf("%d",&chemistry);

     printf("Enter marks of maths:\n");
     scanf("%d",&maths);
    
    printf("Enter marks of englisg:\n");
     scanf("%d",&english);

     printf("Enter marks of physicalEducation:\n");
     scanf("%d",&physicalEducation);
    
    total= physics+chemistry+maths+english+physicalEducation;
    printf("Total marks:%d\n",total);

    percentage=total/5;
    printf("total percentage:%d\n",percentage);

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