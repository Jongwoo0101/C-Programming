#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    
    srand(time(NULL));

    for ( i = 0; i < 9; i ++ ) {
        // 0부터 RAND_MAX 사이의 난수를 생성 및 반환
        printf("시드 값 적용 난수 발생 %d - %d\n", i, rand());
    }

    return 0;
}