#include <stdio.h>

int main() {
    int total = 0;

    for (int i = 0; i < 4; i++) {
        int class_sum = 0;
        for (int j = 0; j < 3; j++) {
            int num;
            scanf("%d", &num);
            class_sum += num;
        }
        printf("%d\n", class_sum);
        total += class_sum;
    }

    printf("%d\n", total);

    return 0;
}
