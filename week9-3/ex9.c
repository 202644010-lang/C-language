#include <stdio.h>

int main() {
    int num;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            cnt++;
        }
    }

    printf("Even numbers = %d\n", cnt);

    return 0;
}
