// Ways to output the elements of the vectors.

#include <iostream>
#include <vector>     // this file is acessed from the stl library.
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4}; 
    cout << v[0]<<endl;     // 1
    cout << v.at(1)<<endl;  // 2
    cout<< v.at(0)<<endl;  // 1

    return 0;
}

// Ways to output the elements of the vector are:
// 1. Using the for loop (done in previous files)
// 2. Using the range-based for loop (also known as for each loop).
// 3. Using the iterator wo tum badh ma padh lene actually ma range wala loop ka meaning hi iterator wala loop hai.

// there are other methods to but see them later.