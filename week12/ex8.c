#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main()
{
    struct Person p[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    struct Person min = p[0];

    for (int i = 1; i < 5; i++)
    {
        if (p[i].height < min.height)
        {
            min = p[i];
        }
    }

    printf("%s %d\n", min.name, min.height);

    return 0;
}
