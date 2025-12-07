// Linearsearch matlab ki apko array ka andhar ma ek particular element ka index find karna hai.

// Q: Write code to find the index of the element that is entered by the user?
// give the index if key is present in the array and if not then return -1.

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1; 
    
}

int main() {
    int n;
    cout<<"Enter the size of array. ";
    cin>>n;
    int key;
    cout<<"Enter the key which you want to search in the arry: ";
    cin>>key;
    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The elements of array are: ";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The index of the key is: "<<linearsearch(arr,n,key);
    return 0;
}