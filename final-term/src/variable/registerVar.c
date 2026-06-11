#include <stdio.h>

int main() {
    register int i; // CPU의 레지스터에 변수가 저장

    for (i = 0; i < 1000000; i ++ ) {

    }

    printf("i = %d \n", i);

    return 0;
}