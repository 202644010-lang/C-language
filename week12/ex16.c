#include <stdio.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother)
{
    struct Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    student.weight = (father.weight + mother.weight) / 2.0 - 4.5;
    return student;
}

int main()
{
    struct Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    struct Body student = makeStudent(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}
