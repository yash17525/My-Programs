#include <iostream>
#include <graphics.h>
#include<math.h>
using namespace std;

void drawEllipse(int xc, int yc, int x, int y)
{

    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    // putpixel(xc+y, yc+x, RED);
    // putpixel(xc-y, yc+x, RED);
    // putpixel(xc+y, yc-x, RED);
    // putpixel(xc-y, yc-x, RED);


}

void ellipseBres(int xc, int yc,int a,int b)
{
    int x = 0, y = b;
    int d1 = b*b - a*a*b + 0.25*a*a;
    drawEllipse(xc, yc, x, y);
  //  while ((a*a)*(y-0.5) > (b*b)*(x+1))
    while(b*b*x < a*a*y)
    {
        if (d1 < 0)
        d1 = d1 + (b*b)*(2*x + 3);
        else
        {  d1 = d1 +(b*b)*(2*x + 3) + (a*a)*(-2*y+2);
          y=y-1;
        }
        x++;
        drawEllipse(xc, yc, x, y);
        delay(50);
      }

      int d2 = (b*b)*(x+0.5)*(x+0.5) + (a*a)*(y-1)*(y-1) - a*a*b*b;
      while(y>0)
      {
        if(d2<0)
        {
           d2 += (b*b)*(2*x+2) + (a*a)*(-2*y+3);
           x+=1;
        }
        else
        d2 += (a*a)*(3-2*y);

        y-=1;
        drawEllipse(xc,yc,x,y);
        delay(50);
      }
    }

int main()
{
    int xc,yc, a,b;
    cout<<"\n Enter center point(x,y):";
    cin>>xc>>yc;
    cout<<"\n Enter semi-major axis(a) and semi-minor axis(b)";
    cin>>a>>b;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    ellipseBres(xc, yc,a,b);
    delay(10000);
    return 0;
}
