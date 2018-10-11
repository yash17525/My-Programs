#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b,int *c)
{
  int temp=*b;
  *b=*a;
  *a=*c;
  *c=temp;

}

int main()
{
  int a,b,c;
  cout<<"\nEnter three numbers";
  cout<<"\na:";cin>>a;
  cout<<"\nb:";cin>>b;
  cout<<"\nc:";cin>>c;
  swap(&a,&b,&c);
  cout<<"Numbers after cyclic order swap";
  cout<<"\na:"<<a;
  cout<<"\nb:"<<b;
  cout<<"\nc:"<<c;
}
