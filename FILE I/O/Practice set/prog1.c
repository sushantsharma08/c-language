#include <stdio.h>
int main()	
{	
    FILE *ptr;
    int n1,n2,n3;
    ptr = fopen("prog1.txt", "r");
    fscanf(ptr, "%d",&n1);
    fscanf(ptr, "%d",&n2);
    fscanf(ptr, "%d",&n3);
    fclose(ptr);
    printf("the tree numbers in the file are : %d, %d, %d.",n1,n2,n3);
    return 0;
}