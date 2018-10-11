#include<bits/stdc++.h>
using namespace std;
int main()
{  int size;
    cout<<"\nEnter size of array:";
    cin>>size;

    int array[size];
    cout<<"\nEnter array elements:";

    for(int i=0;i<size;i++)
    cin>>array[i];

    sort(array,array+size);
    cout<<"\nElements appearing odd number of times:";
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
        if (array[i] == array[j])
        count++;
        }

       if (count % 2 != 0)
       {
        for(int k=i+1;k<size;k++)
        {
          if(array[k]==array[i])
          goto label;
        }
        cout<<array[i]<<" ";
        label:
        ;

        }

    }
return 0;
}
