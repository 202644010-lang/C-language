#include <stdio.h>

struct Person {
    char name[21];
    int score;
};

int main()
{
    struct Person p[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", p[i].name, &p[i].score);
    }

    struct Person max = p[0];

    for (int i = 1; i < 5; i++)
    {
        if (p[i].score > max.score)
        {
            max = p[i];
        }
    }

    printf("%s %d\n", max.name, max.score);

    return 0;
}
