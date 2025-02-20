#include <stdio.h>

#define PI 3.1415926  // 定义常量 PI

float add(float r, float pi);

int main() {
    float r, cir;

    scanf("%f", &r);

    cir = add(r, PI);
    printf("%.2f\n", cir); // 保留两位小数输出

    return 0;
}

float add(float r, float pi) {
    return 2 * r * pi;
}
