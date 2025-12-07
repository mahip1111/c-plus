// write a code to reverse the original array entered by the user? (donot reverse and make copy just change this array into its reverse)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: "; cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element at index "<<i<<": ";
        cin>>arr[i];
    }
    
    cout<<"The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}