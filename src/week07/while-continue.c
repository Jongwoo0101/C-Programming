#include <stdio.h>

int main() {
    int sum = 0;
    int input;

    while (1) {
        printf("양수를 입력하세요 (-1을 입력하면 종료): ");
        scanf("%d", &input);

        if (input == -1) {
            break;
        }
        if (input < 0 ) {
            printf("음수는 무시됩니다.\n");
            continue;
        }

        sum += input;
    }

    printf("입력된 양수의 합계는 %d 입니다.\n", sum);
    
    return 0;
}