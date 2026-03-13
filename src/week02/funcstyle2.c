#include <stdio.h>

int main() {
    int a = 1234;
    printf("[%d]\n", a);
    printf("[%8d]\n", a);
    printf("[%-8d]\n", a);
    printf("[%+8d]\n", a);
    printf("[%08d]\n", a);
    printf("[%+08d]\n", a);

    char b = 'A';
    double c = 3.141592;
    printf("[%c]\n", b);
    printf("[%8c]\n", b);
    printf("[%-8c]\n", b);
    printf("[%f]\n", c);
    printf("[%8.3f]\n", c);
    printf("[%-8.3f]\n", c);
    printf("[%+8.3f]\n", c);
    printf("[%08.3f]\n", c);
    printf("[%+08.3f]\n", c);
}