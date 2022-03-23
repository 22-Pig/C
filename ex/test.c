#include <stdio.h>

int main()
{
    // unsigned 表示整数不以补码形式表达
    unsigned char c = 255;
    int i = 255;
    c = c + 1;
    printf("c=%d,i=%d\n", c, i);
    // 11111111
    // 00000000 00000000 00000000 11111111

    return 0;
}
