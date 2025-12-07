// Various methods to addthe elements in the vector.

// 1. Using the push_back.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);  // with the help of the pushback you can add the element at the last of the vector
    v.push_back(20);
    v.push_back(40);

    cout<<"Elements after push_back: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}