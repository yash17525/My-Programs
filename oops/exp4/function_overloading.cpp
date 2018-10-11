#include<iostream>
#include<math.h>
using namespace std;

void area(int r)
{
  float area= 3.14*r*r;
  cout<<"\nArea of circle = "<<area;
}

void area(int x,int y)
{
  float area = x*y;
  cout<<"\nArea of rectangle = "<<area;
}

void area(int a,int b,int c)
{
  float area,s,x;
  s=(a+b+c)/2;
  x=s*(s-a)*(s-b)*(s-c);
  area=pow(x,0.5);
  cout<<"\nArea of triangle = "<<area;
  cout<<" ,Approx. Area  = "<<round(area);
}

int main()
{ int x;
  cout<<"Enter a digit to calculate area :\n1 for area of circle\n2 for Area of rectangle\n3 for area of traingle....";
  cin>>x;
   if(x==1)
   {
     cout<<"\n Enter radius of circle";
     int x;
     cin>>x;
     area(5);
   }
   if(x==2)
   {
     cout<<"\n Enter two sides of rectngle";
     int x,y;
     cin>>x>>y;
     area(x,y);
   }
   if(x==3)
   {
     cout<<"\n Enter three sides of rectngle";
     int x,y,z;
     cin>>x>>y>>z;
     area(x,y,z);
   }
}
