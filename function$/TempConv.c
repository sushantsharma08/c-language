#include <stdio.h>
float CtoF(float x);
float FtoC(float x);
int main()	
{	
    int convTo;
    float x;
    while(1){
        printf("1. to convert degree celcius to degree fahrenheit\n");
        printf("2. to convert degree fahrenheit to degree celcius\n");
        printf("choose the temprature convertion type : ");
        scanf("%d",&convTo);
        switch (convTo)
        {
        case 1 :
            CtoF(x);
            break;
        case 2 :
            FtoC(x);
            break;
        default:
        printf("Invalid conv choice!!!\n");
            break;
        }
            }
    
    return 0;
}
float CtoF(float x){
    float result;
    printf("Now the temp will be converted from degree celcius to degree fahrenheit\n");
   printf("Enter the value of x : ");
   scanf("%f",&x);
   result = x *(9/5) +32;
   printf("%f degree celcius is %f degree fahrenheit\n\n",x,result);
   return result;
}
float FtoC(float x){
    float result;
     printf("Now the temp will be converted from degree fahrenheit to degree celcius\n");
   printf("Enter the value of x : ");
   scanf("%f",&x);
   result = (float) (x-32)*5/9;
   printf("%f degree fahrenheit is %f degree celcius\n\n",x,result);
   return result;
}