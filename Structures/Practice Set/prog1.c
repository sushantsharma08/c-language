#include <stdio.h>
#include <string.h>

 struct vector {
     int X , Y ;
 };

int main()	
{	
    struct vector V1,V2;
    V1.X=3;
    V1.Y=4;
    V2.X=9;
    V2.Y=8;

    printf("dimensions of V1-x and V1-y are : (%d,%d) \n dimensions of V2-x And V2-y are: (%d,%d)",V1.X,V1.Y,V2.X,V2.Y);
    
    return 0;
}