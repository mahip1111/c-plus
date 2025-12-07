#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = {1, 2, 3};
    arr[2] = 8; //changing the element on index 2
    cout << arr[2] << endl;
    cout<<arr[1]<<endl;
    cout<<arr[0]<<endl;
}

// NOTE:- Arrays don’t automatically print themselves.You must loop through them and print element by element.