#include <stdio.h>
int main()	
{	
    FILE *ptr, *ptr2;
    char c, r;
    ptr = fopen("prog3.txt", "r");
    ptr2 = fopen("prog3_write.txt", "w");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c",c);
        fputc(c , ptr2);
        c = fgetc(ptr);
    }
    return 0;
}