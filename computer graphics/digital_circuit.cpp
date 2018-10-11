#include <iostream>
#include <graphics.h>

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
      //  delay(50);
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

void nandGate(int x,int y)
{ setcolor(RED);
  line(x,y,x+50,y);
  line(x,y+50,x+50,y+50);
  line(x,y,x,y+50);
  line(x+50,y,x+50,y+50);
  boundaryFill4(x+10,y+10,RED,RED);
  circleBres(x+50,y+25,25);
  boundaryFill4(x+60,y+40,RED,RED);
  circleBres(x+78,y+26,3);
  boundaryFill4(x+78,y+25,RED,RED);
  setcolor(WHITE);
}
int main()
{
  int x=60,y=60;
  cout<<"Enter signal values of INPUT ONE(B),INPUT TWO(C),SWITCH(A)  \n (the value of signal can be 0/1)";
  int a,b,c,q=0;
  cin>>a>>b>>c;

  // if(a==0)
  //  a_com=1;
  //  else
  //  a_com=0;
  //
  // q= (a && b) || (a_com && c);

  if(a==0)
  {
    if(b==1)
    q=1;
  }
  else
  {
    if(c==1)
    {
      q=1;
    }
  }

  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
  line(x,y,x+100,y);
  line(x+20,y+30,x+100,y+30);
  nandGate(x+100,y-10);

  line(x+20,y+30,x+20,y+80);
  line(x,y+80,x+50,y+80);
  line(x+50,y+70,x+50,y+90);
  line(x+50,y+70,x+100,y+70);
  line(x+50,y+90,x+100,y+90);
  nandGate(x+100,y+55);

  line(x+181,y+15,x+350,y+15);
  line(x+350,y+15,x+350,y+50);
  line(x+350,y+50,x+400,y+50);
  line(x+350,y+70,x+400,y+70);
  nandGate(x+400,y+35);

  line(x+181,y+80,x+200,y+80);
  line(x+200,y+80,x+200,y+120);
  line(x+200,y+120,x+220,y+120);
  line(x,y+140,x+220,y+140);
  nandGate(x+220,y+105);

  line(x+301,y+130,x+350,y+130);
  line(x+350,y+70,x+350,y+130);
  line(x+481,y+60,x+500,y+60);

  line(x,y+300,x+50,y+300);
  line(x,y+350,x+50,y+350);
  line(x+100,y+325,x+140,y+325);
  line(x+50,y+350,x+100,y+325);
  circleBres(x+50,y+350,3);
  circleBres(x+100,y+325,3);
  outtextxy(x-40,y+300,"B");
  outtextxy(x-40,y+350,"C");
  outtextxy(x+150,y+325,"Q");
  outtextxy(x+75,y+340,"A");
  outtextxy(x+50,y+400,"SWITCH ANALOGY");
  char msg[128];

  sprintf(msg,"B = %d",b);
  outtextxy(x-40,y,msg);

  sprintf(msg,"A = %d",a);
  outtextxy(x-40,y+80,msg);

  sprintf(msg,"C = %d",c);
  outtextxy(x-40,y+140,msg);

  sprintf(msg,"Q = %d",q);
  outtextxy(x+510,y+60,msg);

  //delay(10000);
  getch();
}
