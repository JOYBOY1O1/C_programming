#include <stdio.h>

void sum_and_avg(int num1, int num2, int *sum, float *avg)
{
    *sum = num1 + num2;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;

    sum_and_avg(i, j, &sum, &avg);

    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %0.2f\n",avg);

    return 0;
}