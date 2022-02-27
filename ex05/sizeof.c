#include <stdio.h>
int main()
{
    int a;
    printf("sizeof int = %d\n", sizeof(int)); // 1.测类型所占用字节的大小
    printf("sizeof a = %d\n", sizeof(a));     // 1.测变量的类型所占用字节大小
    printf("sizeof 123 = %d\n", sizeof(123)); // 1.测常量的类型所占用字节大小
    printf("sizeof char=%d\n", sizeof(char));
    printf("sizeof short=%d\n", sizeof(short));
    printf("sizeof int=%d\n", sizeof(int));
    printf("sizeof long=%d\n", sizeof(long));
    printf("sizeof long long=%d\n", sizeof(long long));
}