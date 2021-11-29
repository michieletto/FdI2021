#include <stdio.h>

struct point2d {
    double x;
    double y;
};

void point2d_print(struct point2d p2d)
{
    printf("<%g, %g>\n", p2d.x, p2d.y);
}

struct point2d point2d_mirror_x(struct point2d p2d)
{
    struct point2d r;
    
    r.x = p2d.x;
    r.y = -p2d.y;
    return r;
}

int main() {
    struct point2d p1 = {2.0, 3.0};
    struct point2d p2 = p1;

    point2d_print(p2);

    struct point2d p3;
    p3 = point2d_mirror_x(p2);
    point2d_print(p3);

    return 0;
}