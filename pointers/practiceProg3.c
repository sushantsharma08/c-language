#include <stdio.h>
void TenTimes(int *a){
    *a *= 10;
}
int main()	
{	
    int i=4;
    printf("value of i before calling function is : %d\n",i);
    TenTimes(&i);
    printf("value of i after calling function is : %d\n",i);
    return 0;
}