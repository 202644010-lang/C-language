#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");

        scanf("%d", &choice);
        printf("\n");

        if (choice == 1) {
            printf("Seoul\n\n");
        } else if (choice == 2) {
            printf("Washington\n\n");
        } else if (choice == 3) {
            printf("Tokyo\n\n");
        } else if (choice == 4) {
            printf("Beijing\n\n");
        } else {
            printf("none\n");
            break;
        }
    }

    return 0;
}
