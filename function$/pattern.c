#include <stdio.h>
int pattern(int x);
int main()	
{	
    int a;
    printf("Enter the number of terms : ");
    scanf("%d",&a);
     pattern(a);
    return 0;
}
int pattern(int x){
    int i,j,k,l;
    for(i=1;i<=x;i++){
        for (j = i; j <= x; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (l = 1; l <= i-1; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}