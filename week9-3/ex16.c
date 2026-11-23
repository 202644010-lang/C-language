#include <stdio.h>

int main() {
    for (int dan = 2; dan <= 4; dan++) {
        for (int i = 1; i <= 5; i++) {
            printf("%d * %d = %2d   ", dan, i, dan * i);
        }
        printf("\n");
    }

    return 0;
}
