#include<iostream>
using namespace std;
int main()
{
   int a,b,c,x,y,z;
   cin>>a>>b>>c;
   x=a-b;
   y=b-c;
   z=c-a;
   if(x*y>0)
   cout<<"\n"<<b;
   else if(x*z>0)
   cout<<"\n"<<a;
   else
   cout<<"\n"<<c;
   return 0;
 }
