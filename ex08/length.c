// 原来在字符串结尾处，为了标记这个字符串已经结束了，会在字符串会多占用一个字节，并在这个字节
// 里面填数值0，用于标识字符串结束。

#include <stdio.h>
int main()
{
    printf("sizeof HelloWorld = %d\n", sizeof("HelloWorld"));
    return 0;
}
