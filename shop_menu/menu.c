#include <stdio.h>
#include <stdlib.h>


void BreakfastMenu();
void Lunch();
void FastFood();
void Dinner();
void Dessert();
void NumItems();
void Back();
void ItemName();


int main()	
{	
    int n,MenuOption;
    printf("    *********************************************    \n");
    printf("                       WELCOME                       \n");
    printf("    *********************************************    \n\n");
    printf("                         MENU                        \n\n\n");
    printf("1. Breakfast. \n2. Lunch. \n3. Fast Food.\n4. Dinner. \n5. Desserts.\n6. Exit. \n\n\n");
    printf("Select a option : ");
    scanf("%d",&MenuOption);
    fflush(stdin);
    switch (MenuOption)
    {
    case 1:
        printf("Showing Menu for Breakfast...\n\n");
        BreakfastMenu();
        break;
    case 2:
        printf("Showing Menu for Lunch...\n\n");
        Lunch();
        break;
    case 3:
        printf("Showing Menu for Fast Food...\n\n");
        FastFood();
        break;
    // case 4:
    //     printf("Showing Menu for Dinner...\n\n");
    //     Dinner();
    //     break;
    // case 5:
    //     printf("Showing Menu for Deserts...\n\n");
    //     Dessert();
    //     break;
    case 6:
        exit(1);
        break;
    
    default:
        printf("Invalid choice...\n");
        printf("Choose Again\n");
        main();
        break;
    }
    return 0;
}


void BreakfastMenu()
{
    int poha=10,jalebi=30,Samosa=12;
    printf("1. poha    : %d/plate\n2. jalebi  : %d/plate\n3. Samosa  : %d ke 2\n",poha,jalebi,Samosa);
    ItemName();
    NumItems();
    Back();
}


void Lunch()
{
int DalChawal=100, Roti=3, Sabzi=120;
    printf("1. Dal Chawal : %d/plate\n2. Roti       : %d/per\n3. Sabzi      : %d/per\n",DalChawal,Roti,Sabzi);
    ItemName();
    NumItems();
    Back();
}


void FastFood()
{
    int kachori=10,jalebi=30,Samosa=12,burger=25;
    printf("1. kachori  : %d/plate\n2. jalebi  : %d/plate\n3. Samosa  : %d ke 2\n4. burger  : %d/per",kachori,jalebi,Samosa,burger);
    ItemName();
    NumItems();
    Back();
}


void Back()
{
    char back;
     printf("Would you like to check the Menu again ? \n   y for YES n for No \n");
    fflush(stdin);
    scanf("%c",&back);
    if (back=='y'|| back=='Y')
    {
        main();
    } 
    else if(back=='n' || back=='N'){
        printf("\n\ntaking to billing...\n");
    }
    else{
        printf("\n\nInvalid choice...\n\n");
        Back();
    }
}


void NumItems()
{
    int n;
    printf("How much Do you want? \n");
    printf("Enter units : ");
    scanf("%d",&n);
    printf(" ");
}


void ItemName()
{
    char Item[30];
    printf("\nEnter the name of Item : ");
    scanf("%s", Item);
    printf("you have chosen %s \n\n",Item);
}