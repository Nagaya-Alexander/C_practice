#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    // 比较a和b的大小
    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    // 比较max和c的大小
    if (c > max) {
        max = c;
    }

    printf("最大的数是：%d\n", max);
    return 0;
}
