#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main()
{
    struct Point p[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%lf %lf", &p[i].x, &p[i].y);
    }

    struct Point center;
    center.x = (p[0].x + p[1].x) / 2;
    center.y = (p[0].y + p[1].y) / 2;

    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);

    return 0;
}
