#include <stdio.h>
int main()	
{	
    FILE *ptr;
    int num = 456;
    ptr = fopen("write.txt", "w");
     fprintf(ptr, "the number is %d\n", num);
     fprintf(ptr, "what tha dawg doin\n", num);
    fclose(ptr);
    
    return 0;
}