#include <stdio.h>

int main() {
    int day;
    printf("请输入一个数字（1-5）：");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        default:
            printf("输入的数字不在1到5的范围内。\n");
            break;
    }

    return 0;
}
