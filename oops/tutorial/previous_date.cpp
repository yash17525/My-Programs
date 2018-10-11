#include<iostream>
using namespace std;
int main()
{
  int yy,dd,mm;
    cout<<"\nEnter date (year/month/date):";
  cin>>yy>>mm>>dd;

  if(dd==1)
  {
    if(mm==4 || mm ==2 || mm== 6 || mm == 9 || mm ==11)
    {
      dd=31;
      mm-=1;
    }

    else if(mm ==3)
    {
      if(yy%4 == 0)
      dd=29;
      else
      dd=28;
      mm-=1;
    }
    else if(mm == 1)
    {
      dd = 31;
      mm = 12;
      yy-=1;
    }
    else
    {
      dd = 30;
      mm-=1;
    }
  }
  else
  {
      dd-=1;
  }
    cout<<"\nPrevious Date (year/month/date) : "<<yy<<"/"<<mm<<"/"<<dd;
    return 0;
  }
