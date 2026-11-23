#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        count++;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");

    return 0;
}
