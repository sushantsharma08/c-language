#include <stdio.h>
int main()	
{	
    int table[3][10];
    int i,j;
    for ( i = 0; i < 10; i++)
    {
        table[0][i]= 2*(i+1);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("2X%d=%d\n",i+1,table[0][i]);
    }
    
    
    
    return 0;
}