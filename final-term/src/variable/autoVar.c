#include <stdio.h>

void show() {
    auto int num = 5; // auto: 자동변수, 지역변수를 선언할 때 사용
    printf("Auto Num: %d\n", num);
}

int main() {
    show();
    return 0;
}