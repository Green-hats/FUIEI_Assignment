#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d", &a, &b);

    // 交换 a 和 b
    c = a;
    a = b;
    b = c;

    // 输出交换后的值
    printf("%d %d", a, b);

    return 0;
}

