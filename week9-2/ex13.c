#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    x += 3;
    printf("%d\n", x);

    x -= 1;
    printf("%d ", x);

    x -= 2;
    printf("%d ", x);

    x += 3;
    printf("%d\n", x);

    return 0;
}
