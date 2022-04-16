#include<stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter the last natural number you want the sum of = ");
    scanf("%d",&n);
// Sum = 1 + 2 + 3 + _ _ _ _ + n
/*  RUNS IN LINEAR TIME as (n) increase time runtime also increases
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural numbers = %d\n",n,sum);
*/
// RUNS IN CONSTANT TIME :
    sum = (n*(n+1))/2;
    printf("Sum of first %d natural numbers = %d\n",n,sum);
    return 0;
}