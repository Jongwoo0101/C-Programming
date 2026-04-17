#include <stdio.h>

int main() {
    int n = 0, sum = 0;

    printf("숫자 입력(종료: ctrl + z) : \n");
    while (scanf("%d", &n) != EOF) {
        sum += n;
    }

    printf("\n합계: %d\n", sum);

    return 0;
    
}