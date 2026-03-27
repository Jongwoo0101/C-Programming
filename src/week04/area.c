#include <stdio.h>

int main() {
    float base = 5.0;
    float height = 3.0;
    float traingleArea = (base * height) / 2.0;

    printf("삼각형의 넓이: %.2f\n", traingleArea);

    double width = 4.0;
    double rheight = 6.0;
    double rectangleArea = width * rheight;

    printf("사각형의 넓이: %.2f\n", rectangleArea);

    return 0;
}