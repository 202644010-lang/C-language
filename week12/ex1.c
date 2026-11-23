#include <stdio.h>

int main()
{
    char name[100];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old.", name, age);

    return 0;
}
