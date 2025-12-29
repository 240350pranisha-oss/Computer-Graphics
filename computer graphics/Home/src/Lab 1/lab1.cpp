
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, data);

    // Pixel
    putpixel(100, 50, CYAN);

    // Lines
    setcolor(BLUE);
    line(300, 150, 200, 350);

    setcolor(LIGHTGREEN);
    line(200, 150, 90, 150);

    setcolor(LIGHTBLUE);
    line(260, 240, 190, 180);

   
    setcolor(WHITE);
    circle(320, 280, 120);

    // Rectangle
    setcolor(RED);
    rectangle(150, 50, 50, 210);

    outtextxy(140, 420, (char*)"Pranisha Sijapati");
    outtextxy(140, 440, (char*)"240350");

   
    setbkcolor(BLACK);

    getch();
    closegraph();
    return 0;
}
