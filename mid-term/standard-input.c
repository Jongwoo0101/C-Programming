#include <stdio.h>

int main() {
    char name[5] = "";
    int studentID = 0;
    float average = 0.0;

    printf("이름 입력: ");
    scanf("%s", name);

    printf("학번 입력: ");
    scanf("%d", &studentID);

    printf("평균 학점 입력: ");
    scanf("%f", &average);

    printf("이름: %s\n", name);
    printf("학번: %d\n", studentID);
    printf("평균 학점: %.2f\n", average);

    return 0;
}