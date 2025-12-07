// Q: Return pair in sorted array with target sum.

// Q: Write a code to find all the pairs in the sorted array whose sum is equal to the target sum which is entered by the user and this problem is known as the pair sum problem(brute force approach) in c++


// METHOD 1.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array created is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the sum you are targeting in the array: ";
    int target;
    cin>>target;

    cout<<"The required pair is: ";    // NOTE: Pair means two elements.

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j< n; j++)
        {
            if ((arr[i]+arr[j])==target)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";    // actually here with the help of the loop you are able to make the pairs and with the help of if condition you are able to gather all the requird pairs.
            }
            
        }
        
    }
    return 0;
}

// ye code jitne bhi pairs array ke andar milte hain jinka sum target ke barabar hota hai, sabhi print karega.
