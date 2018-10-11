/* This program is for positive sloves of lines only*/
#include<iostream>
#include<graphics.h>
using namespace std;
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

    dx=abs(x1-x0);
    dy=abs(y1-y0);

    x=x0;
    y=y0;

    p=2*dy-dx;

    for(int i=0;i<dx;i++)
    {
        if(p>=0)
        {
            putpixel(x,y,5);
            if(y<y1)
            y=y+1;
            else
            y-=1;
            if(x<x1)
            x+=1;
            else
            x-=1;
            p=p+2*dy-2*dx;
        }
        else
        {
             if(x<x1)
             x+=1;
             else
             x-=1;
            putpixel(x,y,5);
            p=p+2*dy;
        }

    }
}

int main()
{
    int gdriver=DETECT, gmode,x0, y0, x1, y1;


    cout<<"Enter co-ordinates of first point: ";
    cin>>x0>>y0;

    cout<<"Enter co-ordinates of second point: ";
    cin>>x1>>y1;
    initgraph(&gdriver, &gmode, NULL);
    drawline(x0, y0, x1, y1);
    delay(10000);
    return 0;
}
