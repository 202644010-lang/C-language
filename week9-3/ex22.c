#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    int cnt = 0;

    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / cnt);

    return 0;
}
