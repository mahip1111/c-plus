// this concept of size and capacity of the vecotor is told in the dsa notebook.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    cout<<"size and capacity at first push_back are: ";
    cout << v.size()<<" ";     // size: 1
    cout << v.capacity() << endl; // capacity: 1

    v.push_back(2);
    cout<<"size and capacity at second push_back are: ";
    cout << v.size()<<" ";     // size: 2
    cout << v.capacity() << endl; // capacity: 2

    v.push_back(3);
    cout<<"size and capacity at third push_back are: ";
    cout << v.size()<< " ";     // size: 3
    cout << v.capacity() << endl; // capacity: 4

    v.push_back(4);
    cout<<"size and capacity at fourth push_back are: ";
    cout << v.size()<<" ";     // size: 4
    cout << v.capacity() << endl; // capacity: 4

    v.push_back(5);
    cout<<"size and capacity at fifth push_back are: ";
    cout << v.size()<< " ";     // size: 5
    cout << v.capacity() << endl; // capacity: 8

}
