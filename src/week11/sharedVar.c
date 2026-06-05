#include <stdio.h>

extern int sharedVar;

void displaySharedVar(void);

int main() {
    printf("내부 변수 sharedVar: %d\n", sharedVar);
    displaySharedVar();

    return 0;
}