#include <stdio.h>

int main() {
    double base, height;
    char ch;

    while (1) {
        scanf("%lf %lf", &base, &height);

        double area = (base * height) / 2.0;
        printf("Triangle width = %.1f\n", area);

        printf("Continue? ");
        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}
