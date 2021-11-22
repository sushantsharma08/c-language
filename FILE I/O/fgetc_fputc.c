#include <stdio.h>
int main()	
{	
    FILE *ptr;
    // fgetc demo
    ptr = fopen("fgetc_fputc.txt", "r");
    char c = fgetc(ptr);
    printf("the value/string in the file is : %c\n",c);

    // fputc demo.
    ptr = fopen("fputcDemo.txt", "w");
    putc('c',ptr);
    return 0;
}