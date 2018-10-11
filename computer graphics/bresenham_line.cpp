/*This program is for lines of slopes greater than and less than one. */
#include<iostream>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

    dx=abs(x1-x0);
    dy=abs(y1-y0);

    x=x0;
    y=y0;
    float slope = dy/dx;
    if(slope>1)
    { //swap x0,y0
      int temp =x0;
      x0=y0;
      y0=temp;
      //swap x1,y1
      temp=x1;
      x1=y1;
      y1=temp;
    }

    p=2*dy-dx;


    for(int k=1;k<=dx;k++)
    {
      if(p<0)
      {
        if(x<x1)
        x=x+1;
        else
        x-=1;
        p+=2*dy;
      }
      else
      {
        if(y<y1)
        y+=1;
        else
        y-=1;
        if(x<x1)
        x+=1;
        else
        x-=1;
        p+=2*(dy-dx);

      }

      if(slope>1)
      putpixel(y,x,7);
      else
      putpixel(x,y,7);
      delay(50);
    }
}

int main()
{
    int gdriver=DETECT, gmode;
    int  x0, y0, x1, y1;

   cout<<"Enter co-ordinates of first point: ";
   cin>>x0>>y0;

   cout<<"Enter co-ordinates of second point: ";
   cin>>x1>>y1;

    initgraph(&gdriver, &gmode,NULL);
    drawline(x0, y0, x1, y1);
    delay(10000);

    return 0;
}
