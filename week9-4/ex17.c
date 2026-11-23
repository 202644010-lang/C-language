#include <stdio.h>

int main() {
    int n;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%c ", ch++);
        }
        for (int j = 0; j < i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
