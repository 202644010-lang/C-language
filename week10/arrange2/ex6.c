#include <stdio.h>

int main() {
    int arr[100];
    
    arr[0] = 100;
    scanf("%d", &arr[1]);

    int count = 2;
    while (1) {
        arr[count] = arr[count - 2] - arr[count - 1];
        if (arr[count] < 0) {
            count++;
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
