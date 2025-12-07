// Q: Write a code to take the array from the user and then tell what is the maximum element of that array?

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];

    for (int i = 0; i <n; i++)
    {
        cout<<"Enter the element at index: "<<i<<" ";
        cin>>arr[i];
    }

    cout<<"The elements of the array are: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int max = arr[0];  // Assume first element is the maximum

    for (int i = 1; i < n; i++) {    // now 2nd elemnt se nth element tak ka code chalao
        if (arr[i] > max) {
            max = arr[i];  // Update max if max is less then arr[i].
        }
    }

    cout<<"The max element of the given array is: "<<max;
    
    return 0;
};