#include<iostream>
#include<string.h>
using namespace std;

class S
{ public:
  char str[50];
  void get()
  {
    cin>>str;
  }
  void put()
  {
    cout<<"\n"<<str;
  }

  S operator +(S x)
  { S obj;
    strcat(str,x.str);
    strcpy(obj.str,str);
    return obj;
  }
};

int main()
{
  S s1,s2,s3;
  s1.get();
  s2.get();
  s3=s1+s2;
  s3.put();

}
