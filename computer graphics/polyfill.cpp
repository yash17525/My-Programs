#include <iostream>
#include <graphics.h>

using namespace std;

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
{ int x=100,y=100,ans;
  cout<<"Enter numbers to draw different shapes:\n1 for Square\n2 for Triangle";
  cout<<"\n3 for Rectangle\n4 for Convex Polygon\n5 for Concave Polygon";
  cout<<"\nAny number for irregular shape\n";
  cin>>ans;
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
  if(ans ==1)
  {
  //square
  line(x,y,x+50,y);
  line(x,y,x,y+50);
  line(x,y+50,x+50,y+50);
  line(x+50,y,x+50,y+50);
  boundaryFill4(x+10,y+10,RED,WHITE);
  }
  else if(ans == 2)
  {
 //triangle
  line(x,y,x,y+50);
  line(x,y+50,x+50,y+50);
  line(x,y,x+50,y+50);
  boundaryFill4(x+5,y+20,RED,WHITE);
  }
  else if(ans == 3)
  {//rectangle
  line(x,y,x+100,y);
  line(x,y,x,y+50);
  line(x,y+50,x+100,y+50);
  line(x+100,y,x+100,y+50);
  boundaryFill4(x+10,y+10,RED,WHITE);
  }
  else if(ans == 4)
  {
    // convex polygon(hexagon)
    line(x,y,x,y+50);
    line(x+100,y,x+100,y+50);
    line(x,y,x+50,y-30);
    line(x+100,y,x+50,y-30);
    line(x,y+50,x+50,y+80);
    line(x+100,y+50,x+50,y+80);
    boundaryFill4(x+10,y+10,RED,WHITE);
  }
  else if(ans==5)
  { //concave
    line(x,y,x,y+50);
    line(x+100,y,x+100,y+50);
    line(x,y,x+20,y+40);
    line(x+20,y+40,x+50,y-30);
    line(x+100,y,x+50,y-30);
    line(x,y+50,x+50,y+80);
    line(x+50,y+80,x+50,y+25);
    line(x+50,y+25,x+100,y+50);

    boundaryFill4(x+90,y+10,RED,WHITE);

  }
  else
  {
    //irregular shapes
    line(x,y,x+100,y-10);
    line(x,y,x-20,y+50);
    line(x+100,y-10,x+100,y+50);
    line(x-20,y+50,x+50,y+80);
    line(x+100,y+50,x+50,y+80);
    boundaryFill4(x+10,y+10,RED,WHITE);

  }
  getch();
  closegraph();
}
