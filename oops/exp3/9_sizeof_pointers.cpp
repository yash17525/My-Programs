#include<bits/stdc++.h>
using namespace std;

int main()
{ int a=10;
  char b='a';
  float c=10.0;
  double d=10.00;
  long e=3;
  long long f=43;
  int *p=&a;
  char *q=&b;
  float *r=&c;
  double *s=&d;
  long *t=&e;
  long long *u=&f;
  cout<<"\nsize of int pointer:"<<sizeof(*p);
  cout<<"\nsize of char pointer:"<<sizeof(*q);
  cout<<"\n\nsize of float pointer:"<<sizeof(*r);
  cout<<"\nsize of double pointer:"<<sizeof(*s);
  cout<<"\nsize of long pointer:"<<sizeof(*t);
  cout<<"\nsize of long long pointer:"<<sizeof(*u);

  return 0;

}
