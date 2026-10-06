#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    // 선택 정렬
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        // 가장 작은 값 찾기
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // 값 교환
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // 결과 출력
    printf("선택 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}