// multiplying array elements.
// arr[] = &arr[0]

// therfore when we pass array to the function then in that case there is only call by adress 


#include <iostream>
using namespace std;

void multiple(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]*=2;
    }
    
}

int main() {

    int arr[]={1,2,3};
    multiple(arr,3);
    cout<<"The elements of the array after the function call are: ";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";       // output 2 4 6   (bcz of call by adress)
    }
    
 
    return 0;
}