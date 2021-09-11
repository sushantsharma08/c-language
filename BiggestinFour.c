#include <stdio.h>
int main()	
{	
    int a,b,c,d;

    printf("Enter the Four Numbers:" );
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    {
        printf("a:%d is the greatest number",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("b:%d is the greatest number",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("c:%d is the greatest number",c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("d:%d is the greatest number",d);
    }
    
    
    
    
     
    
    return 0;
}