#include <stdio.h>
int main(){
    float degCelcius,degaFahrenheit;
    printf("enter the temprature in degree celcius:\n");
    scanf("%f",&degCelcius);

    printf("Temprature in degree fahrenheit will be:%f",(degCelcius*9/5)+32);
    return 0;
}