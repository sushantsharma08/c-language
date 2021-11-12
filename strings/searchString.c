#include <stdio.h>
void search(int *arr, int *x);
int main()	
{	
    int n, arr[5]={10,22,33,6,8};
    printf("Enter the element you need to search : ");
    scanf("%d",&n);
    // search(arr, &n);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==n)
        {
            printf("element is present at %d position\n",i+1);
        }
    }
    printf("element not present in array");
    
    
    
    return 0;
}

// void search(int *arr, int *x)
// {
//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         // if (*arr=*x)
//         // {
//         //     printf("element is present at %d position ",i);
//         // }
        
//     }
    
// }