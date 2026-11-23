#include <stdio.h>

struct Rect {
    int x1;
    int y1;
    int x2;
    int y2;
};

int main()
{
    struct Rect r[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d %d %d", &r[i].x1, &r[i].y1, &r[i].x2, &r[i].y2);
    }

    struct Rect res;
    res.x1 = (r[0].x1 < r[1].x1) ? r[0].x1 : r[1].x1;
    res.y1 = (r[0].y1 < r[1].y1) ? r[0].y1 : r[1].y1;
    res.x2 = (r[0].x2 > r[1].x2) ? r[0].x2 : r[1].x2;
    res.y2 = (r[0].y2 > r[1].y2) ? r[0].y2 : r[1].y2;

    printf("%d %d %d %d\n", res.x1, res.y1, res.x2, res.y2);

    return 0;
}
