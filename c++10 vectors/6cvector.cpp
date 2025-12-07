// FUNTIONS OF VECOTRS: 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    // insert 10 at index 2
    v.insert(v.begin() + 2, 10);     //{1,2,10,3,4,5}
    cout<<"vector after using the insert: ";
    for (int value : v)
    {
        cout<< value <<" ";
    }
    cout<<endl;

    // erase element at index 3
    v.erase(v.begin() + 3);    // {1,2,10,4,5}
    cout<<"vector after using the erase: ";
    for (int value : v)
    {
        cout<< value <<" ";
    }
    cout<<endl;

    // erase range
    v.erase(v.begin()+1, v.begin()+4);  //{1,5}
    // NOTE: Last index is exclusive here.
    cout<<"vector after using the erase range: ";
    for (int value : v)
    {
        cout<< value <<" ";
    }
    cout<<endl;

    return 0;
}
