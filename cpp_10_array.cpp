/*
1. What is array ?
=> array is collection of same type of variables/elements
2. Whar is syntax of array ?
int arr[arr_length]; // declaration
int arr = new int[5]; // declaration
3. Explain predefine methodes for array in cpp ?

*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5}; // fixed lenght
   
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int *grr = new int[5];

    for (int i = 0; i < n; i++)
    {
        grr[i] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<grr[i]<<" ";
    }
    
    cout<<endl;
    
    

    return 0;
}