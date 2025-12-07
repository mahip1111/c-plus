// Way to insert the element in between the vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(10);  
    v.emplace_back(20);
    v.emplace_back(40);

    v.insert(v.begin() + 1, 15); // Insert 15 at index 1
    // v.begin() = index 0 and usma add karke tum index change kar sakta ho.

    cout<<"Elements after emplace_back and insertion function. ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    

    return 0;
}