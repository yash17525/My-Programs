
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
    int d = 1 - r;
    drawCircle(xc, yc, x, y);
    while (y >x)
    {

        if (d < 0)
        d = d + 2*x+3;
        else
        {  d = d + 2*(x-y)+ 5;
          y=y-1;
        }
        x++;
        drawCircle(xc, yc, x, y);
        delay(50);
      }
    }

int main()
{
    int xc , yc, r;
    cout<<"\n Enter centre of circle(x,y):";
    cin>>xc>>yc;
    cout<<"\n Enter radius of circle:";
    cin>>r;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    circleBres(xc, yc, r);
    delay(5000);
    return 0;
}
