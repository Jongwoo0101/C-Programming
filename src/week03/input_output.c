#include <stdio.h>

int main() {
    int a = 0;
    char c;
    float b;

    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    printf("문자를 입력하세요: ");
    scanf(" %c", &c);

    printf("실수를 입력하세요: ");
    scanf("%f", &b);

    printf("입력받은 정수: %d\n", a);
    printf("입력받은 문자: %c\n", c);
    printf("입력받은 실수: %f\n", b);

}

