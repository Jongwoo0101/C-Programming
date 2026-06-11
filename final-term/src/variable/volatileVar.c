#include <stdio.h>

int main() {
    volatile int flag = 0; // 컴파일러에 의해 변수가 최적화되지 않도록 지시

    while (!flag) {
        // 대기 상태
    }
    printf("Flag is now: %d\n", flag);
    return 0;
}