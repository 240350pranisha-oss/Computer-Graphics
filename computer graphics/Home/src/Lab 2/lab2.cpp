#include <stdio.h>
#include <math.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Changed coordinates
    int x1 = 50, y1 = 50;
    int x2 = 300, y2 = 200;
    int k, s;

    float x, y, dx, dy, xinc, yinc;

    // Initialize starting point
    x = x1;
    y = y1;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        s = abs(dx);
    else
        s = abs(dy);

    xinc = dx / s;
    yinc = dy / s;

    // DDA Line Drawing
    for (k = 0; k < s; k++)
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(round(x), round(y), WHITE);
    }

    // Changed text position and content
    outtextxy(200, 380, (char *)"Pranisha Sijapati");
    outtextxy(200, 400, (char *)"240350");

    getch();
    closegraph();
    return 0;
}
