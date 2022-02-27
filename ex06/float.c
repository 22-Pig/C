// 将 printf("%d\n",a); 中的占位符是 %d ，所以我们用 %f 替换。
// （ %d 占位符用于整型， %f 占位符用于浮点型）
#include <stdio.h>
int main()
{
    float a = 1.234567;
    float b = 0.00001;
    float c = 365.12345;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    return 0;
}

// C标准规定，float类型必须至少能表示6位有效数字，并且取值范围至少是10^-37~10+37。