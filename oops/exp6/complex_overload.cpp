#include<iostream>
using namespace std;

class complex
{
  int r,i;
  public:
  void get()
  { cout<<"\nEnter real part:";
    cin>>r;
    cout<<"\nEnter imaginary part:";
    cin>>i;

  }

  void put()
  {
    cout<<"\n"<<r<<" + i("<<i<<")";
  }

  complex operator -(complex c)
  {
    complex x ;
    x.r = r- c.r;
    x.i = i- c.i;
    return x;
  }

};

int main()
{
  complex c1,c2,c3;
  cout<<"\nEnter complex number 1:";
  c1.get();
  cout<<"\nEnter complex number 2:";
  c2.get();
  c3=c1-c2;
  cout<<"\nSubtraction result:";
  c3.put();
return 0;
}
