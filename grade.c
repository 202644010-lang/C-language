#include <stdio.h>

#define MAX_STUDENT 50
void bubbleSort(int *arr, int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main(void) {
    int n;
    int score[MAX_STUDENT];
    int *ptr = score;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_STUDENT) {
        printf("오류: 학생 수는 1~50명까지 입력 가능합니다.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d번째 학생 성적: ", i + 1);
        scanf("%d", ptr + i);
    }

    bubbleSort(ptr, n);

    printf("\n정렬된 성적: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    printf("\n최고 성적: %d", *(ptr + n - 1));
    printf("\n최하 성적: %d\n", *ptr);

    return 0;
}