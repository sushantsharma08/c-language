#include <stdio.h>
#include<string.h>

struct item
{
    int code;
    float price;
    char name[20];
};

void show(struct item eat){

    printf("item code is : %d\n",eat.code);
    printf("item price is : %f\n",eat.price);
    printf("item name is : %s\n",eat.name);
}

int main()	
{	
   struct item poha;
   struct item *ptr;
    ptr=&poha;

   ptr->code = 101;
    ptr->price = 44.77;
   strcpy(ptr->name,"poha");
    show(poha);
    return 0;
}