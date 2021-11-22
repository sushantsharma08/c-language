#include <stdio.h>
#include <string.h>

 struct vector {
     int X , Y ;
 };

struct vector sumVector( struct vector V1 , struct vector V2){
 struct vector result;
 result.X= V1.X+V2.X;
 result.Y= V1.Y+V2.Y;
 return result;
}

int main()	
{	
    struct vector V1,V2,sum;
    V1.X=3;
    V1.Y=4;
    V2.X=9;
    V2.Y=8;

    printf("dimensions of V1-x and V1-y are : (%d,%d) \n dimensions of V2-x And V2-y are: (%d,%d)\n",V1.X,V1.Y,V2.X,V2.Y);
    
   sum = sumVector(V1,V2);
    printf("final vector is (%d,%d)",sum.X,sum.Y);

    return 0;
}