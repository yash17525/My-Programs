#include<bits/stdc++.h>
using namespace std;

void swap(char *a,char *b)
{
  char temp=*a;
  *a=*b;
  *b=temp;

}

void reverse_array(char array[],int size)
{  char *p1,*p2;
   p1 = array;
   p2 = array+size-1;
   while(p1<p2)
   {
     swap(p1,p2);
     p1++;
     p2--;
   }
}

int main()
{  int size,i;
   cout<<"\nEnter size of string:";
   cin>>size;
   char array[size];
   char *p=array;
   for(i=0;i<size;i++)
   cin>>array[i];
   reverse_array(array,size);
   cout<<"\nReversd string:";
   for(i=0;i<size;i++)
   cout<<array[i];

   return 0;
}
