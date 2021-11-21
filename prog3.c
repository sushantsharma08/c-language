#include <stdio.h>
#include <string.h>

typedef struct complex {
    int real,complex;

} comp;

void display(comp c){
    
        printf("The number is : %d+%di\n",c.real,c.complex);
}

int main()	
{	
    comp cnums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part for number %d: ",i+1);
        scanf("%d",&cnums[i].real);
        
        printf("Enter the imaginary part for number %d: ",i+1);
        scanf("%d",&cnums[i].complex);

        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    
    
    
    return 0;
}