#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i ++ ) {
        if (i % 2 != 0) {
            continue; // 참일 때 증감식으로 이동
        }
        printf("%d\n", i); // 홀수 이면 실행x
    }

    return 0;
}