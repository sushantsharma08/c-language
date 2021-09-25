#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main()	
{	
    printf("below are Three diffrent functions\n");
    GoodMorning();                  // Here only one function is called srom inside which oothers are called.
    
    
    printf("Function calling finished\n");
    return 0;
}

void GoodMorning(){
    printf(" GoodMorning vro !!\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf(" GoodAfternoon vro !!\n");
    GoodNight(); 
}
void GoodNight(){
    printf(" GoodNight vro !!\n");
}