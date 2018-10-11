//Q. given set U and A ,find A'
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i;
      cout<<"\nEnter number of elements in universal set U:";
      cin>>n;
      cout<<"\nEnter number of elements in set A:";
      cin>>m;
      int arr1[n];
      int arr2[m];
      cout<<"\nEnter the  elements of set U:";
      for(i=0;i<n;i++)
      cin>>arr1[i];
      cout<<"\nEnter the  elements of set A:";
      for(i=0;i<m;i++)
      cin>>arr2[i];

      vector<int>v(n);
      vector<int>::iterator it,ls;

      sort(arr1,arr1+n);
      sort(arr2,arr2+m);
      ls=set_difference(arr1,arr1+n,arr2,arr2+m,v.begin());
      cout<<"\n"<<*ls;
      cout<<"\nComplement of set A:";
      for(it=v.begin();it<ls;++it)//ls is pointing to one more element
      cout<<" "<<*it;             //than the no. of elements in A'

      //we can also use other way after line 25.
      //resize(ls - v.begin());  //vector will be
      //for(ls=v.begin();ls!=v.end();++ls)                       // resized to no of spaces which are filled
      //cout<<" "<<*ls;
      
      return 0;

}
