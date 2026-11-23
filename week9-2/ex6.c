#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            printf("positive number\n");
        } else {
            printf("negative number\n");
        }
    }

    return 0;
}
