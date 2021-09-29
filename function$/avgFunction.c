#include <stdio.h>

float avg(int a,int b,int c);
int main()	
{	
    int a,b,c;
    printf("Enter the value of a, b and c :");
    scanf(" %D %d %d",&a,&b,&c);
     avg(a,b,c);   
    
    return 0;
}
float avg(int a,int b,int c){
    float result;
    result = (float)(a+b+c)/3;
       printf(" the avg value is : %f",result);
      return result;
}