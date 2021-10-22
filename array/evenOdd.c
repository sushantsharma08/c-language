#include <stdio.h>
int main()	
{	
    int n, A[n], i, even = 0, odd = 0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value for A[%d] : ",i);
        scanf("%d",&A[i]);
        if (A[i]%2==0)
        {
            even++;
        }
        else
        {
            odd ++;
        }        
    }
    printf("number of Even entries : %d\n",even);
    printf("number of Odd entries : %d\n",odd);
    
    
    
    return 0;
}
