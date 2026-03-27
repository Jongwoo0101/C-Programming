#include <stdio.h>

int main() {
    int i = 5;
    double d = 2.2;
    double result1 = i + d;
    double result2 = i * d;
    double result3 = (double)i - d;
    double result4 = (double)i / d;

    printf("덧셈 결과: %lf\n", result1);
    printf("곱셈 결과: %lf\n", result2);
    printf("뺄셈 결과: %lf\n", result3);
    printf("나눗셈 결과: %lf\n", result4);

    return 0;
}