#include <stdio.h>
void func(int num, int b);
int main()	
{	
    int num,opt;
    printf("ENter the value in decimal number : ");
    scanf("%d",&num);
    printf("1. Binary\n2. Octal\n3.Hexadecimal\n");
    printf("Enter your choice : ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1 : printf("Binary equivalent is : ");
        func(num,2);
        break;
        case 2 : printf("octal equivalent is : %d");
        func(num,8);
        break;
        case 3 : printf("Hexadecimal equivalent is : %d");
        func(num,16);
        break;
        default : printf("invalid choice");
    }
    
    return 0;
}
void func(int num, int b)
{
    char a[10];
    int i=0,j,rem;
    while(num>0)
    {
        rem=num%b;
        num /= b;
        if (rem>9 && rem<16)
        {
            a[i++]= rem-10+'A';
        }
        else
        {
            a[i++]='O';
        }

    }
    for (j = i-1 ; j <= 0; j--)
    {
        printf("%c",a[j]);
    }
    return num;
}