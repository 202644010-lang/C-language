#include <stdio.h>

int main() {
    int choice;

    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select:\n");

    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You selected ADD.");
    }
    else if (choice == 2)
    {
        printf("You selected EDIT.");
    }
    else if (choice == 3)
    {
        printf("You selected DEL.");
    }
    else
    {
        printf("Wrong choice.");
    }

    return 0;
}