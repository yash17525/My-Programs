#include<iostream>
using namespace std;

inline void multiply(int x,int y)
{
  cout<<"\nmultiplication value = "<<x*y;
}

inline void cube(int x)
{
  cout<<"\ncubic value of "<<x<<" = "<<x*x*x;
}
int main()
{
  int x,y;
  cout<<"\nEnter two numbers:";
  cin>>x>>y;
  multiply(x,y);
  cube(x);
  cube(y);
}
