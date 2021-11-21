//used to make custom data type.
#include <stdio.h>
#include<string.h>

typedef struct item  //here typedef makes whole struct_item easier to write as a single data type to be "item"
{
    int code;
    float price;
    char name[20];
} item;  // here the name of custom data type is written.


void show(item eat){

    printf("item code is : %d\n",eat.code);
    printf("item price is : %f\n",eat.price);
    printf("item name is : %s\n",eat.name);
}

int main()	
{	

   item poha, samosa;
   item *ptr1, *ptr2;

    ptr1=&poha;
    ptr2=&samosa;

   ptr1->code = 101;
   ptr2->code = 22;
    ptr1->price = 44.77;
    ptr2->price = 30.72;
   strcpy(ptr1->name,"poha");
   strcpy(ptr2->name,"samosa");
    show(poha);
    show(samosa);

    
    return 0;
}