#include <stdio.h>
#include <stdlib.h>

void bubbleSortAscending (int arr[], int n) {
    for (int i = 0; i < n - 1; i ++ ) {
        for (int j = 0; j < n - i - 1; j ++ ) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n = 0;

    printf("배열의 크기 입력: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i ++ ) {
        printf("배열의 %d 번째 원소 입력: ", i);
        scanf("%d", &arr[i]);
    }

    printf("초기상태 배열: [");
    for (int i = 0; i < n; i ++ ) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    bubbleSortAscending(arr, n);

    printf("정렬된 배열: [");
    for (int i = 0; i < n; i ++ ) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    return 0;
}