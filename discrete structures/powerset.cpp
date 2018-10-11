#include <iostream>
#include <math.h>

using namespace std;

void printPowerSet(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
    cout<<"\nTotal number of elements in power set:"<<pow_set_size;
    cout<<"\nElements of power set are:";

    for(counter = 0; counter < pow_set_size; counter++)
    {
      cout<<"\n";
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
          cout<<set[j];
       }

    }
    cout<<"\nEmpty";
}


int main()
{
    int n;
    cout<<"\nEnter size of the set:";
    cin>>n;
    char set[n];
    cout<<"\nEnter elements of set:";
    for(int i=0;i<n;i++)
    {
      cin>>set[i];
    }
    printPowerSet(set, n);
    return 0;
}
