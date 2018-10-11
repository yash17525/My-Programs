#include <iostream>
using namespace std;

int main()
{  int size;
  cout<<"Enter size of array:";
   cin>>size;
   int array[size];
   cout << "Enter elements: ";

   for(int i = 0; i < size; ++i)
   cin >> array[i];

   int *length = array+size, *position = array;
   cout << "Array = ";
   for (position = array; position < length; position++)
   cout << *position << " ";

   return 0;
}
