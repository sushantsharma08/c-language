//before opening check if file exists.
#include <stdio.h>
#include <stdlib.h>

int main()	
{	
    FILE *ptr;
    int n;
    ptr = fopen("test.txt", "r"); //changed first into test
    if (ptr == NULL)
    {
        printf("file does not Exists make sure you choose a right file.");
        exit(1);
    }
    
    fscanf(ptr, "%d",&n);
    fclose(ptr);
    printf(" the value strored in file is : %d",n);
    
    return 0;
}