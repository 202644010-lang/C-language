#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", arr[0] + arr[2] + arr[4]);

    return 0;
}
