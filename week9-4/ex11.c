#include <stdio.h>

int main() {
    char ch = 'a';
    int num = 1;

    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j <= 4 - i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
