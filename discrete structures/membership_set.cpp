#include<iostream>
using namespace std;
int  main()
{
  int n,flag=0;
  char x;
  cout<<"\nEnter size of the set:";
  cin>>n;
  char set[n];
  cout<<"\nEnter elements of set:";
  for(int i=0;i<n;i++)
  {
    cin>>set[i];
  }
  cout<<"\nEnter element to be searched in given set :";
  cin>>x;
  for(int i=0;i<n;i++)
  {
    if(set[i] == x)
    {  cout<<"Given element found in set.";
       flag=1;
       break;
    }

  }
  if(flag==0)
  cout<<"Given not found in set.";
}
