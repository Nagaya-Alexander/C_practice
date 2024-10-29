#include <stdio.h>

int main() {
    int ages[5];
    int i, j, temp;

    printf("请输入5位同学的年龄：\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ages[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (ages[j] < ages[j + 1]) {
                temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }

    printf("从大到小的年龄排序：\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ages[i]);
    }

    return 0;
}
