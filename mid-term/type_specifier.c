#include <stdio.h>

int main() {
    printf("%d\n", 98765); // 일반 출력
    printf("%-d\n", 98765); // 왼쪽 정렬
    printf("%10d\n", 98765); // 너비 10, 오른쪽 정렬
    printf("%-10d\n", 98765); // 너비 10, 왼쪽 정렬
}