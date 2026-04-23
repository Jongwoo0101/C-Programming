#include <stdio.h>

int main() {
    int year = 0;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
        printf("윤년 입니다.");
    }
    else {
        printf("평년 입니다.");
    }
}