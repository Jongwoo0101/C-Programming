#include <stdio.h>

int sharedVar = 10;

void displaySharedVar(void) {
    sharedVar += 5;
    printf("외부 공유 변수: %d\n", sharedVar);
}