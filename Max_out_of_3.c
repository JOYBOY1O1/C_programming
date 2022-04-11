#include <stdio.h>

int main()
{   int a,b,c,max;
    printf("Enter 3 numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a<b)
    {
        if(b<c)
        {
            max = c;
        }
        else
        {
            max = b;
        }
    }
    else
    {
        if(a<c)
        {
            max = c;
        }
        else
        {
            max = a;
        }
    }
    printf("Maximum of the 3 numbers = %d",max);
    return 0;
}