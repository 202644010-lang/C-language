#include <stdio.h>

int main() {
    for (int i = 2; i <= 6; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}
