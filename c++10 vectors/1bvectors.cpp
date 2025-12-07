// Ways to intiallize the array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int> vec(3) = {1, 2, 3};      // this thing is allowed in the array but not allowed in the vecotrs bcz of dma.
    vector<int> vec = {1,2,3};  // simple way to intialize the vector using the initializer list.
    cout<<vec[0]<<endl;   

    // vector<int> vec;    // intializing of the empty vector (simple intialization)

    // vector<int> vec(5);   // {0,0,0,0,0}  // In this case the size of the vector will become 5 and by default all the elements become zero.

    // vector<int> vec(5, 10);   // size = 5, values = {10, 10, 10, 10, 10}


    // vector<int> v1 = {1, 2, 3};     // Initialize from Another Vector (Copy Constructor)
    // vector<int> v2(v1);
    // cout<<v2[0];

    // vector<int> vec;        // intializing using the assign function.
    // vec.assign(5, 100);    // {100, 100, 100, 100, 100}
    // cout<<vec[0];

    return 0;
}

// there are other ways too of intialization which you can see later.