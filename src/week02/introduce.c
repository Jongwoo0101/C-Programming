#include <stdio.h>

int main() {
    char name[20];
    int id;
    char major[20];
    char hobby[20];

    printf("이름: ");
    scanf("%s", name);

    printf("학번: ");
    scanf("%d", &id);

    printf("학과명: ");
    scanf("%s", major);

    printf("취미: ");
    scanf("%s", hobby);
    
    printf("이름: %s\n", name);
    printf("학번: %d\n", id);
    printf("학과명: %s\n", major);
    printf("취미: %s", hobby);

    return 0;
}