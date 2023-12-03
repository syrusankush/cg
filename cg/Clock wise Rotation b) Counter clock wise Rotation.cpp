/*16.	Write C++ program to draw 2-D object and perform following basic transformation
a)	Clock wise Rotation b) Counter clock wise Rotation*/


#include <graphics.h>
#include <cmath>

void drawObject() {

    rectangle(200, 200, 400, 400);
    circle(300, 300, 50);
}

void rotateClockwise(float angle) {
    float rad = angle * 3.14159 / 180;
    int cx = 300, cy = 300;


    for (int x = 200; x <= 400; x++) {
        for (int y = 200; y <= 400; y++) {
            int newX = cx + (x - cx) * cos(rad) + (y - cy) * sin(rad);
            int newY = cy - (x - cx) * sin(rad) + (y - cy) * cos(rad);
            putpixel(newX, newY, WHITE);
        }
    }
}

void rotateCounterClockwise(float angle) {
    float rad = angle * 3.14159 / 180;
    int cx = 300, cy = 300;


    for (int x = 200; x <= 400; x++) {
        for (int y = 200; y <= 400; y++) {
            int newX = cx + (x - cx) * cos(rad) - (y - cy) * sin(rad);
            int newY = cy + (x - cx) * sin(rad) + (y - cy) * cos(rad);
            putpixel(newX, newY, WHITE);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    drawObject();


    rotateClockwise(30);


    rotateCounterClockwise(45);

    getch();
    closegraph();
    return 0;
}
