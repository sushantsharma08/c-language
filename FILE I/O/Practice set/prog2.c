#include <stdio.h>
int main()	
{	
    FILE *ptr;
    int n=0,i;
    ptr=fopen("prog2.txt", "w");

    printf("Enter the number whose table you want : ");
    scanf("%d",&n);
    for ( i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n",n,i+1,(n*(i+1)));
    }
    printf("the Table is ready to view in the file generated.");
    
    return 0;
}