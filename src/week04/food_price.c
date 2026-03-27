#include <stdio.h>
#define VAT_RATE 0.04

int main() {
    double foodPrice;
    double totalPrice = 0.0;

    printf("음식의 가격을 입력하세요(원): ");
    scanf("%lf", &foodPrice);

    totalPrice = foodPrice + (foodPrice * VAT_RATE);

    printf("부가세 포함 총 가격: %.2lf원\n", totalPrice);

    return 0;
}
