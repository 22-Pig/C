#include <stdio.h>
int main()
{

    int a, i;
    float sum = 0, average;
    printf("please input 10 numbers:");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &a);
        sum = sum + a;
    }

    average = sum / 10;
    printf("average is %f\n", average);
}