#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{ int x0,y0,x1,y1,dx,dy,x,y,steps,x_incre,y_incre;
  cout<<"Enter co-ordinates of first point: ";
  cin>>x0>>y0;

  cout<<"Enter co-ordinates of second point: ";
  cin>>x1>>y1;

int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);

  dx=(x1-x0);
  dy=(y1-y0);
  if(abs(dx)>abs(dy))
  steps=abs(dx);
  else
  steps=abs(dy);

  x_incre=dx/steps;
  y_incre=dy/steps;
  x=x0;
  y=y0;
  putpixel(round(x),round(y),5);

  for(int i=0;i<steps;i++)
  {
    x+=x_incre;
    y+=y_incre;
    putpixel(round(x),round(y),5);
    delay(50);
  }

  delay(10000);
}
