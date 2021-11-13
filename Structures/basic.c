#include <stdio.h>
#include <string.h>
struct item
{
    int code;
    float cost;
    char name[30];
};
void numItem();

int main()	
{	
    struct item poha;
    poha.code=99;
    poha.cost=20.25;
    strcpy(poha.name,"poha");

    printf("item code is %d\n",poha.code); 
    printf("item name is %s\n",poha.name); 
    printf("item price is %.2f\n",poha.cost); 
    
    numItem();
    return 0;
}

void numItem(){
    int cost,n;
    struct item poha;
    poha.code=99;
    poha.cost=20.25;
    strcpy(poha.name,"poha");

    printf("Enter the code of item : ");
    scanf("%d",&poha.code);
    if (poha.code==99)
    {
        cost=poha.cost;
    }
    printf("how much : ");
    scanf("%d",&n);
    printf("total amount is %d",cost*n);
    

}
void poha(){
    struct item poha;
    poha.code=99;
    poha.cost=20.25;
    strcpy(poha.name,"poha");
}