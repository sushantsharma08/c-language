#include <stdio.h>
#include <time.h>
void delay(int x){
    int milliSec= 1000*x;
    clock_t startTime = clock();
    while (clock()< startTime + milliSec);
    
}
int main()	
{	
    int i,n;
    n=3;
    printf("Loading...\n");
    for( i=0 ; i<n; i++){
        delay(1);
        // printf("%d seconds have passed...\n",i+1);
    }
    printf("Loaded in %d seconds.\n",i);
    return 0;
}