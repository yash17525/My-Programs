// CPP program to find union and intersection
// using sets
#include <bits/stdc++.h>
using namespace std;

void printUnion(string arr1[], string arr2[], int n1, int n2)
{
    set<string> hs;

    // Inhsert the elements of arr1[] to set hs
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);

    // Insert the elements of arr2[] to set hs
    for (int i = 0; i < n2; i++)
        hs.insert(arr2[i]);
 

    // Print the content of set hs
    cout<<"\nUnion nof set A and B : ";
    for (auto it = hs.begin(); it != hs.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void printIntersection(string arr1[], string arr2[],int n1, int n2)
{
    set<string> hs;

    // Insert the elements of arr1[] to set S
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);

   // If element is present in set then
  // push it to vector V
    cout<<"\nIntersection of set A and B : ";
    for (int i = 0; i < n2; i++)
    if (hs.find(arr2[i]) != hs.end())  //find(const g) – Returns an iterator to the element ‘g’ in the set if found,
            cout << arr2[i] << " ";        // else returns the iterator to end
}

int main()
{   int n,m,i;
    cout<<"\nEnter number of elements in set A:";
    cin>>n;
    cout<<"\nEnter number of elements in set B:";
    cin>>m;
    string arr1[n];
    string arr2[m];
    cout<<"\nEnter the  elements of set A:";
    for(i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"\nEnter the  elements of set B:";
    for(i=0;i<m;i++)
    cin>>arr2[i];
    printUnion(arr1, arr2, n,m);
    printIntersection(arr1, arr2,n,m);

    return 0;
}
