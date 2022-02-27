// float和double均可以使用 %f 来作为占位符
#include <stdio.h>
int main()
{
    double a = 1.234567;
    double b = 0.00001;
    double c = 365.12345;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    return 0;
}