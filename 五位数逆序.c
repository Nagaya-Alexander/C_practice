#include <stdio.h>

int main() {
    int num, temp, digit;
    int count = 0;

    printf("请输入一个5位的正整数：");
    scanf("%d", &num);

    // 检查输入是否为5位数
    if (num < 10000 || num > 99999) {
        printf("输入的不是一个5位的正整数。\n");
        return 1;
    }

    temp = num;

    // 计算数字的位数
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    printf("该数字是%d位数。\n", count);

    // 分别输出每一位数字
    printf("每一位数字分别是：");
    temp = num;
    int divisor = 10000; // 从最高位开始
    while (divisor > 0) {
        digit = temp / divisor;
        printf("%d ", digit);
        temp %= divisor;
        divisor /= 10;
    }
    printf("\n");

    // 按逆序输出各位数字
    printf("按逆序输出各位数字：");
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        printf("%d", digit);
        temp /= 10;
    }
    printf("\n");

    return 0;
}
