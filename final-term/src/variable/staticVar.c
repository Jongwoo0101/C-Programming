#include <stdio.h>

void increment() {
    static int count = 0; // 정적 변수로 선언하면 변수가 초기화될 때 메모리에 할당되고, 프로그램 실행 종료까지 유지
    count ++;
    printf("Static Count : %d\n", count);
}

int main() {
    /*
    increment();
    increment();
    increment();
    */
    for (int i = 0; i < 3; i ++ ) {
        increment();
    }

    return 0;
}