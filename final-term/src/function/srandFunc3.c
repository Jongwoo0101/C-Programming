#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    srand(time(NULL));

    for ( i = 0; i < 9; i ++ ) {
        // 1 + rand() % 100: 1~100까지의 난수 생성
        printf("시드 값 적용 난수 발생 %d - %d\n", i, 1 + rand() % 100);
    }

    return 0;
}