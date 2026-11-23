#include <stdio.h>

int main() {
    int score;
    int sum = 0;
    int cnt = 0;

    while (1) {
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            break;
        }

        sum += score;
        cnt++;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / cnt);

    return 0;
}
