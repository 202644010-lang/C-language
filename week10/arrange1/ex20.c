#include <stdio.h>

int main() {
    int num;
    int count = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 5 == 0) {
            count++;
            sum += num;
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / count);

    return 0;
}
