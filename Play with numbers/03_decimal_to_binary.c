#include<stdio.h>

int main()
{
    int n,rem, i=0;
    printf("Enter a number = ");
    scanf("%d",&n);

    int a[10];

    while(n)
    {
        rem = n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }

    for(int j=i-1 ; j>=0 ; j--)
    {
        printf("%d", a[j]);
    }
    return 0;
}