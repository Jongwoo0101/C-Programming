#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateDice() {
    return 1 + rand() % 6;
}

int input() {
    int guess;
    printf("주사위를 던져 나올 숫자를 맞혀보세요 (1에서 6까지), (0을 입력하면 종료): ");
    scanf("%d", &guess);

    return guess;
}

void playGuessingGame() {
    int userGuess, diceResult;

    do {
        userGuess = input();
        diceResult = generateDice();
        printf("주사위 결과: %d\n", diceResult);
        if (diceResult == userGuess) {
            printf("숫자를 맞혔습니다.!\n");
        }
        else {
            printf("아쉽게도 틀렸습니다.\n");
        }
    } while (userGuess != 0);
}

int main() {
    // srand(time(NULL));

    printf("게임 시작\n");

    playGuessingGame();

    printf("게임 종료");

    return 0;
}