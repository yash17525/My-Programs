#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n],first,second;
   first=second=INT_MIN;

   for (int i = 0; i < n; i++)
   cin>>arr[i];

   for (int i = 0; i < n; i++)
   {
     if(arr[i]>first)
     {
       second=first;
       first=arr[i];
     }
     else if(first>arr[i] && arr[i]>second)
     second=arr[i];
   }
   cout<<"\n"<<second;
  return 0;
}
