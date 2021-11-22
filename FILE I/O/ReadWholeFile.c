#include <stdio.h>
int main()	
{	
    FILE *ptr;
    char c;
    ptr = fopen("fgetc_fputc.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}