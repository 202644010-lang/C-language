#include <stdio.h>

int main() {
    int scores[4][4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            scores[i][3] += scores[i][j];
            scores[3][j] += scores[i][j];
            scores[3][3] += scores[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
