#include<iostream>
#include<graphics.h>
using namespace std;

void Cube(int x,int y,int s)
{
line(x,y+s,x+400,y+s);
line(x,y+s,x,y-200);
line(x,y,x,y+s);
line(x,y,x+s,y);
line(x,y+s,x+s,y+s);
line(x+s,y,x+s,y+s);
line(x+100,y+100,x+100,y+s+100);
line(x+100,y+100,x+s+100,y+100);
line(x+100,y+s+100,x+s+100,y+s+100);
line(x+s+100,y+100,x+s+100,y+s+100);
line(x,y,x+100,x+100);
line(x+s,y,x+s+100,y+100);
line(x,y+s,x+100,y+s+100);
line(x+s,y+s,x+s+100,y+s+100);

}

int main()
{
  int x,y,s;
  cin>>x>>y>>s;
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
  Cube(x,y,s);
  getch();

}
