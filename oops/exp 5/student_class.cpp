//WAP in c++ to read and priny details of student using classes and object.
#include<iostream>
using namespace std;

class student
{
  int roll_no,registraton_no;
  char name[25];
  float percentage;

  public:
  void getdata()
  {
    cout<<"\nEnter registraton number:";
    cin>>registraton_no;
    cout<<"\nEnter roll number:";
    cin>>roll_no;
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"\nEnter percentage:";
    cin>>percentage;
  }

  void putdata()
  {
    cout<<"\nRegistraton number:";
    cout<<registraton_no;
    cout<<"\nRoll number:";
    cout<<roll_no;
    cout<<"\nName:";
    cout<<name;
    cout<<"\nPercentage:";
    cout<<percentage<<"%";

  }
};

int main()
{
  int n,i;
  cout<<"\nEnter the total number of students:";
  cin>>n;
  student s[n];
  for(i=0;i<n;i++)
  {
    cout<<"\nEnter details of student number "<<i+1<<":";
    s[i].getdata();
  }

  for(i=0;i<n;i++)
  {
    cout<<"\nDetails of student number "<<i+1<<":";
    s[i].putdata();
    cout<<"\n";
  }

  return 0;
}
