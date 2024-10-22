#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("请输入一个百分制成绩：");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        grade = 'A';
    } else if (score >= 80 && score < 90) {
        grade = 'B';
    } else if (score >= 70 && score < 80) {
        grade = 'C';
    } else if (score >= 60 && score < 70) {
        grade = 'D';
    } else if (score < 60 && score >= 0) {
        grade = 'E';
    } else {
        printf("输入的成绩不合法。\n");
        return 1;
    }

    printf("对应的成绩等级是：%c\n", grade);
    return 0;
}
