#include <stdio.h>

int main() {
    int num;
    int odd = 0;
    int even = 0;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}
