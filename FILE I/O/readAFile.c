#include <stdio.h>
int main()	
{	
    FILE *ptr;
    int n;
    ptr = fopen("read.txt", "r");
    fscanf(ptr, "%d",&n);
    fclose(ptr);
    printf(" the value strored in file is : %d",n);
    return 0;
}