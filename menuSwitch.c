#include <stdio.h>
int main()	
{	
    int choice;

      while(1)
      
      {
          
          printf("1.Create DataBase\n");
          printf("2.Insert Record\n");
          printf("3.Modified a Record\n");
          printf("4.Delete a Record\n");
          printf("5.Display all Records\n");
          printf("6.Exit\n");
          printf("Enter your choice: ");
          scanf("%d",&choice);
               switch(choice)
               {
                  case 1 :
                     printf("\n\n DataBase created...\n\n");
                     break;
                  case 2 :
                     printf("\n\n Record Inserted...\n\n");
                     break;
                  case 3 :
                     printf("\n\n Record Modified...\n\n");
                     break;
                  case 4 :
                     printf("\n\n Deleted Record...\n\n");
                     break;
                  case 5 :
                     printf("\n\n Records Displayed...\n\n");
                     break;
                  case 6 :
                     exit(1);
                     break;
                  default:
                     printf("\n\n invalid choice\n\n");
                }                 
      }
    return 0;
}