// Way to print the vector using the for each loop.

// read about the for each loop more and see ki kya aap ise loop ki madat se input le sakta ho kya
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <char> vec = {'a', 'b', 'c'};
    
    for (char value : vec)    // this is the for each loop.
    {
        cout<< value <<" ";
    }
    cout<<endl;
    
    // sending copy in the for each loop. call by value 
    vector<int> v = {1,2,3};
        for (int x : v) {
        x = x * 10;   // copy me change
        }

    cout << v[0]<<endl;   // Output: 1 (change nahi hua)

    // call by refrence (not call by adress. ) 
    for(int& x : v) {
    x = x * 10;   // reference me change
    }
    cout << v[0]<<endl;   // Output: 10 (change ho gaya)

    return 0;
}

// EXPLAINING THE FOR EACH LOOP SYNTAX:-

// for (char i : vec)    vec is vecotr name and i is the iterator.
// {
//     cout<< i<<" ";
// }
// here i is the iterator and in for each loop it have the value of index elements rather then in for loop where i have the index value and not index elements.

// DIFFERENCE: CALL BY ADRESS AND CALL BY REFRENCE SYNTAX.
// ✔️ Reference (int& x) → call by reference
// ✔️ Pointer (int* x) → call by address
