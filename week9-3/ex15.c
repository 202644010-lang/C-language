#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int dan = 2; dan <= 4; dan++) {
            printf("%d * %d = %2d   ", dan, i, dan * i);
        }
        printf("\n");
    }

    return 0;
}
