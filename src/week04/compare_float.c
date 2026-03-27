#include <stdio.h>

int main() {
    float a = 0.1f;
    float b = 0.1f + 0.2f - 0.2f;

    printf("a와 b는 %s\n", (a == b) ? "같습니다." : "같지 않습니다.");
    float epsilon = 0.000001;
    printf("지정된 오차 범위 내에서 a와 b는 %s\n", ((a - b) < epsilon && (b - a) < epsilon) ? "같습니다." : "같지 않습니다.");

    return 0;
}