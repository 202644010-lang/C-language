#include <stdio.h>

int main() {
    int n;
    int scores[20];
    int temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] < scores[j]) {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", scores[i]);
    }

    return 0;
}
