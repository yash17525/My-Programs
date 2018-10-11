
/*write a program to find median of two sorted array */
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size1,size2,i=0;
  float median;
  cout<<"\nEnter size of first array:";
  cin>>size1;
  cout<<"\nEnter size of second array:";
  cin>>size2;

  int size=size1+size2;
  float a[size1],b[size2],c[size];
  cout<<"\nEnter first array elements:";
  while(i<size1)
  {  cin>>a[i];
     i++;
  }
  i=0;
  cout<<"\nEnter second array elements:";
  while(i<size2)
  {  cin>>b[i];
     i++;
  }
  i=0;
  while(i<size1)
  {
      c[i]=a[i];
      i++;
  }
  i=0;
  while(i<size2)
  {
      c[i+size1]=b[i];
      i++;
  }
  i=0;
  cout<<"\nMerged array before sorting:\n";
  while(i<size)
  {
    cout<<c[i]<<" "<<"";
    i++;
  }
  sort(c,c+size);
  cout<<"\nMerged array after sorting:\n";
  for(i=0;i<size;i++)
  cout<<c[i]<<" ";

  if((size1+size2)%2!=0)
  { int a=(size1+size2+1)/2;
    median=c[a-1];
  }
  else
  { int a=(size1+size2)/2;
    median=(c[a] +c[a-1])/2;
  }

  cout<<"\nMedian="<<median;
  return 0;
}
