#include <stdio.h>

int main() {
    int arr[4][2];
    int total_sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            total_sum += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        int row_sum = 0;
        for (int j = 0; j < 2; j++) {
            row_sum += arr[i][j];
        }
        printf("%d ", row_sum / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        int col_sum = 0;
        for (int i = 0; i < 4; i++) {
            col_sum += arr[i][j];
        }
        printf("%d ", col_sum / 4);
    }
    printf("\n");

    printf("%d\n", total_sum / 8);

    return 0;
}
