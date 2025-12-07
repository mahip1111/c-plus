// Ways to input the elements of the vector.

// 1. Fixed size vector input: 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the vector: ";
    cin >> n;

    vector<int> v(n);

    cout<<"Enter the elements of the v: \n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout<<"The elements of the vector v are: ";
    for (int i = 0; i < n; i++)
    {
        cout<< v[i]<<" ";
    }

    return 0;
}

// NOTE: like in array the name of the array represents the base adress but there is no such condition exist in the case of vectors.
