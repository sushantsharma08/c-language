#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main()	
{	
    printf("below are Three diffrent functions\n");
    GoodMorning();
    GoodAfternoon();
    GoodNight(); 
    printf("Function calling finished\n");
    return 0;
}

void GoodMorning(){
    printf(" GoodMorning vro !!\n");
}
void GoodAfternoon(){
    printf(" GoodAfternoon vro !!\n");
}
void GoodNight(){
    printf(" GoodNight vro !!\n");
}