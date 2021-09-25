#include <stdio.h>
void display();  //function declared \ function prototype
int main()	
{	
    printf("initializing display function \n");
    display(); // function called
    printf("function finished its work\n");
    
    return 0;
}
// function declaration
void display(){
    printf("this is display function\n");
}