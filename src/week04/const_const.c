#include <stdio.h>

int main() {
    const double PI = 3.14159265;

    double radius = 5.0;
    double area = 0;

    area = PI * radius * radius;

    printf("반지름: %.2lf\n", radius);
    printf("기호 상수 PI: %.8lf\n", PI);
    printf("원의 넓이: %.8lf\n", area);

    return 0;
}