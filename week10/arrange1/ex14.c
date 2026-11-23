#include <stdio.h>

int main() {
    int score[10];
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < 10; i++) {
        if ((i + 1) % 2 == 0) {
            even_sum += score[i];
        } else {
            odd_sum += score[i];
        }
    }

    printf("sum : %d\n", even_sum);
    printf("avg : %.1f\n", (double)odd_sum / 5);

    return 0;
}
