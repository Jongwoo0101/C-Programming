#include <stdio.h>

int main() {
    double dscore;
    dscore = 589.73456;

    printf("dscore: %lf\n", dscore);
    printf("dscore: %.2lf\n", dscore);
    printf("dscore: %e\n", dscore);
    printf("dscore: %E\n", dscore);

    return 0;
}