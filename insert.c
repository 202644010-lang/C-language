#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    // 삽입 정렬
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // 현재 값보다 큰 값을 한 칸씩 뒤로 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 현재 값을 알맞은 위치에 삽입
        arr[j + 1] = key;
    }

    // 결과 출력
    printf("삽입 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}