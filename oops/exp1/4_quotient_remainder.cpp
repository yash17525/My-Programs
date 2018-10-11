#include<bits/stdc++.h>
using namespace std;
int main()
{
  int divisor,divident,quotient,remainder1;
  cout<<"Enter divident :";
  cin>>divident;
  cout<<"\nEnter divisor:";
  cin>>divisor;
  if(divisor==0)
  {
    cout<<"\nDivision by zero not possible!!!!";
  }
  else
  {
  quotient = divident/divisor;
  remainder1 = divident%divisor;
  cout<<"\nQuotient:"<<quotient;
  cout<<"\nRemainder:"<<remainder1;
  }

 return 0;
}
