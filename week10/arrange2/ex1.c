#include <stdio.h>

int main() {
    int count[11] = {0};
    int num;

    while (1) {
        scanf("%d", &num);
        if (num < 1 || num > 10) {
            break;
        }
        count[num]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
