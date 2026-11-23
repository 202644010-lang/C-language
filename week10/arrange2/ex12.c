#include <stdio.h>

int main() {
    int scores[5][4];
    int pass_count = 0;

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            sum += scores[i][j];
        }
        int avg = sum / 4;
        if (avg >= 80) {
            printf("pass\n");
            pass_count++;
        } else {
            printf("fail\n");
        }
    }

    printf("Successful : %d\n", pass_count);

    return 0;
}
