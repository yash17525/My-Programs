#include<iostream>
using namespace std;

class incre_decre
{

  int i,j;
  public:
    incre_decre()
    {
      i=0;j=0;
    }
    void get()
    {
      cin>>i>>j;
    }

    void put()
    {
      cout<<i<<" "<<j<<"\n";
    }

    friend void operator --(incre_decre &);
    friend void operator --(incre_decre &,int);
    friend void operator ++(incre_decre &);
    friend void operator ++(incre_decre &,int);

};

void operator --(incre_decre &x)
{
  --x.i;
  --x.j;
}

void operator --(incre_decre &x,int)
{
  x.i--;
  x.j--;
}

void operator ++(incre_decre &x)
{
  ++x.i;
  ++x.j;
}

void operator ++(incre_decre &x,int)
{
  x.i++;
  x.j++;
}

int main()
{
  incre_decre obj1,obj2;
  obj1.get();
  obj1.put();
  obj1++;
  obj1.put();
  ++obj1;
  obj1.put();
  obj1--;
  obj1.put();
  --obj1;
  obj1.put();


}
