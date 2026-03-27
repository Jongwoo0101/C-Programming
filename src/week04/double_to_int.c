#include <stdio.h>

int main() {
    double d = 5.0;
    int i;

    i = d; // double형 변수 d의 값을 int형 변수 i에 대입 -> 큰 수의 자료형에서 작은 수의 자료형으로 자동 형 변환

    printf("i의 값: %d\n", i);

    return 0;
}