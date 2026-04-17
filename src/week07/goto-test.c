#include <stdio.h>

int main() {
    int i;

    for (i = 0; i <= 10; i ++ ) {
        if (i == 6) {
            goto end_loop;
        }
        printf("%d", i);
        printf("\n");
    }

    end_loop:
        printf("반복이 끝난 후 i 값은 %d\n", i);
}