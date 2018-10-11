
#include <iostream>
#include <graphics.h>
#include<math.h>
using namespace std;

void drawCircle(int xc, int yc, int x, int y)
{

    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc-x, RED);


}

void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (y >= x)
    {   int dx=abs(x-xc);
        int dy=abs(y-yc);
        float slope = dy/dx;
        //if(slope == 1/2)
        //drawline(xc,yc,xc+x,yc+y);
        drawCircle(xc, yc, x, y);
        x++;


        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(50);
    }
}

int main()
{
    int xc = 200, yc = 200, r = 100;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circleBres(xc, yc, r);
    //drawline(xc,yc,xc+r,yc);
    delay(5000);
    return 0;
}
