#include <stdio.h>

int main() {
    char first, second;
    printf("MBTI의 첫 번째와 두 번째 글자를 입력하세요 (예: E/I, N/S): ");
    scanf(" %c %c", &first, &second);

    if (first == 'E') {
        printf("당신은 외향적인 성격을 가지고 있습니다.\n");
        if (second == 'S') {
        printf("감각형입니다.\n");
        }
        else if (second == 'N') {
            printf("직관형입니다.\n");
        }
    }
    else if (first == 'I') {
        printf("당신은 내향적인 성격을 가지고 있습니다.\n");
        if (second == 'S') {
            printf("감각형입니다.\n");
        }
        else if (second == 'N') {
            printf("직관형입니다.\n");
        }
    }
    char third, fourth;

    printf("MBTI의 세번째와 네 번쨰 글자를 입력하세요 (에: F/T, P/J)");
    scanf(" %c %c", &third, &fourth);

    if (third == 'T') {
        printf("논리적이고 객관적으로 판단하는 사고입니다.\n");
        if (fourth == 'J') {
            printf("계획형입니다.\n");
        }
        else if (fourth == 'P') {
            printf("즉흥적입니다.\n");
        }
    }

    else if (third == 'F') {
        printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n");
        if (fourth == 'J') {
            printf("계획형입니다.\n");
        }
        else if (fourth == 'P') {
            printf("즉흥적입니다.\n");
        }
    }

    return 0;
}