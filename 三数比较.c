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

//一个更简洁但逻辑性能强的比较方法
void compare_three_number(int a,b,c)
{
return a>b?(a>c?a:c):(b>c?b:c)
}

