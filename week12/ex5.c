#include <stdio.h>

struct School {
    char name[100];
    int grade;
};

int main()
{
    struct School school1 = {"Jejuelementary", 6};
    struct School school2;

    scanf("%s %d", school2.name, &school2.grade);

    printf("%d grade in %s School\n", school1.grade, school1.name);
    printf("%d grade in %s School\n", school2.grade, school2.name);

    return 0;
}
