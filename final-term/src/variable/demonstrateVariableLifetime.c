#include <stdio.h>
#include <time.h>
#include <unistd.h>

int globalVar;

void demonstrateVariableLifetime() {
    static int staticVar;
    int localVar = 0;

    printf("정적 지역변수와 일반 지역변수가 생성된 시간 (ms): %ld\n", clock());
    sleep(2);

    staticVar++;
    localVar++;

    printf("정적 지역변수와 일반 지역변수가 소멸되기 전 시간 (ms): %ld\n", clock());
    sleep(3);
}

int main() {
    sleep(2);
    printf("전역변수가 생성된 시간 (ms): %ld\n", clock());

    demonstrateVariableLifetime();
    demonstrateVariableLifetime();

    sleep(3);
    printf("전역변수가 소멸되기 전 시간 (ms): %ld\n", clock());

    return 0;
}