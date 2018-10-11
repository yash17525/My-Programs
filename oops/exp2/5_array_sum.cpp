#include<iostream>
#include<vector>
using namespace std;
int main()
{ int n,b,sum=0;
  vector<int>array;
  cout<<"\n Enter how many elements you want to enter:";
  cin>>n;
  cout<<"\nEnter elements of the array:";
 for (int i = 0; i <n; i++)
  {   cin>>b;
      array.push_back(b);
      sum+=array[i];
  }
  cout<<"\nSum of array elements:"<<sum;
  return 0;
}
