#include <stdio.h>
#include <string.h>

struct Person {
    char name[101];
    char tel[101];
    char addr[101];
};

int main()
{
    struct Person p[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
    }

    struct Person first = p[0];

    for (int i = 1; i < 3; i++)
    {
        if (strcmp(p[i].name, first.name) < 0)
        {
            first = p[i];
        }
    }

    printf("name : %s\n", first.name);
    printf("tel : %s\n", first.tel);
    printf("addr : %s\n", first.addr);

    return 0;
}
