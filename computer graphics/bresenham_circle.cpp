
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
    {
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

void boundaryFill4(int x,int y,int fillColor,int borderColor)
{

  if((getpixel(x,y) != borderColor) && (getpixel(x,y) != fillColor))
  {
    putpixel(x,y,fillColor);
    boundaryFill4(x+1,y,fillColor,borderColor);
    boundaryFill4(x-1,y,fillColor,borderColor);
    boundaryFill4(x,y+1,fillColor,borderColor);
    boundaryFill4(x,y-1,fillColor,borderColor);
  }

}

int main()
{
    int xc, yc, r;
    cout<<"\n Enter centre of circle(x,y):";
    cin>>xc>>yc;
    cout<<"\n Enter radius of circle:";
    cin>>r;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circleBres(xc, yc, r);
    boundaryFill4(xc,yc,BLUE,RED);
    delay(5000);
    return 0;
}
