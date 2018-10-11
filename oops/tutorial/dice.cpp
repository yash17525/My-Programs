#include<iostream>
#include<ctime>

using namespace std;
int main()
{  char response;
   cin>>response;
  time_t current_time;

  while(response == 'y'|| response == 'Y')
	{    time(&current_time);
    cout<<current_time;
     //int a =current_time %6 +1;
     // cout<<a;

}
}
