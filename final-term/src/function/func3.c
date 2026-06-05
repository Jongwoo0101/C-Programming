#include <stdio.h>

int function3() {
    int n;
    scanf("%d", &n);
    printf("매개변수가 없고 반환값이 있는 함수\n");
    printf("매개변수: 없음\n");
    printf("반환값 있음: 32\n");

    return n;
}

int main() {
    int result3 = function3();
    printf("function3의 반환값: %d\n", result3);

    return 0;
}