#include<iostream>
using namespace std;
int main()
{
  int n,m,i,j;
  cout<<"\nEnter size of set A and B:";
  cin>>n>>m;
  char A[n],B[m];
  cout<<"\nEnter elements of set A:";
  for(i=0;i<n;i++)
  cin>>A[i];
  cout<<"\nEnter elements of set B:";
  for(i=0;i<m;i++)
  cin>>B[i];
  cout<<"\nElements of A * B :";
  cout<<"{";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    printf("(%c,%c),",A[i],B[j]);
  }
  cout<<"}";

}
