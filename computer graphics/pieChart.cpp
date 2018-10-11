g++#include<iostream>
#include<math.h>
#include<graphics.h>
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
      putpixel(y,x,WHITE);
      else
      putpixel(x,y,WHITE);
      delay(50);
    }
}


void drawCircle(int xc, int yc, int x, int y)
{

    putpixel(xc+x, yc+y,WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y,WHITE);
    putpixel(xc-x, yc-y,WHITE);
    putpixel(xc+y, yc+x,WHITE);
    putpixel(xc-y, yc+x,WHITE);
    putpixel(xc+y, yc-x,WHITE);
    putpixel(xc-y, yc-x,WHITE);


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

#define round(a)(int(a+0.5))
int main()
{
double total=0.0,a=0.0;
double x2,y2;
int i,n;
int gd=DETECT,gm;
cout<<"PIE CHART"<<endl;
cout<<"Enter the no. of regions"<<endl;
cin>>n;
double values[10];
double per[10];
double angle[10]={0,0,0,0,0,0,0,0,0,0};
double b[10];
cout<<"Enter the values of the regions"<<endl;

for(i=0;i<n;i++)
{
cin>>values[i];
total=total+values[i];
}

initgraph(&gd,&gm,NULL);
circleBres(300,300,100);
line(300,300,400,300);

int x3,y3,fill=4;
for(i=0;i<n;i++)
{
per[i]=((values[i]/total)*100);
a=((per[i]/100)*360);
if(i==0)
b[i]=a;
else
b[i]=b[i-1]+a;
angle[i]=(3.14*b[i])/180;
 int ang=(3.14*(b[i]-10))/180;
x2=(300+100*cos(angle[i]));
y2=(300-100*sin(angle[i]));

/*we are finding co ordinates of the point lying
 in a  separated region of  pie chart so that we can
  fill that region  with some specific color using polyfill algorithm*/
x3=(300+50*cos(ang));
y3=(300-50*sin(ang));

line(300,300,round(x2),round(y2));
boundaryFill4(x3,y3,fill,WHITE);
fill++;
}
// x3=(300+50*cos(angle[i]/2));
// y3=(300-50*sin(angle[i]/2));
// boundaryFill4(x3,y3,fill,WHITE);
delay(10000);
getch();
closegraph();
}
