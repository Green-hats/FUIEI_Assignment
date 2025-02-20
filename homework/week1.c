#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int work1(){
    int need,v,days;
    scanf("%d %d",&need,&v);
    days=need / v;
    printf("%d",days);
    return 0;
}
int work2() {
    int num1,num2,diff;
    scanf("%d %d",&num1,&num2);
    diff = num1 - num2;
    diff = abs(diff);
    printf("%d",diff);
    return 0;
}
int work3() {
    float sheshi,huashi;
    scanf("%f",&huashi);
    sheshi=5*(huashi-32)/9;
    printf("%.2f",sheshi);
    return 0;
}
int week4() {
    char a;
    scanf("%c", &a);  // 读取输入字符
    char b = tolower(a);  // 转换为小写
    printf("%c", b);  // 输出转换后的字符
    //toupper 小转大
    return 0;
}