#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for ( i = 0; i < 10; i ++ ) {
        // 0부터 99사이의 값을 반환
        printf("%d ", rand() % 100);
    }
    printf("\n");

    for ( i = 0; i < 10; i ++ ) {
        // 1부터 100 사이의 값을 반환
        printf("%d ", 1 + rand() % 100);
    }
}