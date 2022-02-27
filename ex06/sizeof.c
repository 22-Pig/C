// 用sizeof来测量一下float和double分别占用多大的空间。
#include <stdio.h>
int main()
{
    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof double = %d\n", sizeof(double));
    return 0;
}
