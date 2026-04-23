#include <stdio.h>

int main() {
    int num = 0;

    printf("출력하고 싶은 단(2~9)단 사이를 입력하세요: ");
    scanf("%d", &num);

    for (int i = 1; i <= 9; i ++ ) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}