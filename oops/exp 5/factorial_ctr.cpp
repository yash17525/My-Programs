//WAP in c++ to find factorial of a number using copy constructor.
#include<iostream>
using namespace std;

class factorial
{
  int f,fact;
  public:
  factorial(int x)
  {
    fact=1;
    f=x;
    factorial_calculate();
  }

  factorial(const factorial& a)
  {
    fact = a.fact;
  }

  void factorial_calculate()
  {
    for(int i=1;i<=f;i++)
    fact= fact*(i);
  }

  void display()
  {
    cout<<"\nFactorial:"<<fact;
  }

};

int main()
{
  int n;
  cout<<"\nEnter the number :";
  cin>>n;
  factorial obj1(n);
  factorial obj2(obj1);
  obj2.display();

}
