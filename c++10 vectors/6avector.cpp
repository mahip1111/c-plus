// FUNCTIONS OF VECTORS: 

#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4};
    vec.pop_back();       // this will remove the last element from the vector.
    for (int i = 0; i <vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout <<"Element in first postion: "<< vec.front()<<endl;;  // prints first value

    cout <<"Element in last postion: "<< vec.back()<<endl;   // prints last value

    cout <<"Element at index 1: "<< vec.at(1)<<endl;    // prints value at index 1

    cout<< vec.empty()<<endl;    // give 0 if vector is not empty give 1 if vector is empty.

    cout<< vec.capacity()<<endl;  // told in dsa notebook

    return 0;
}