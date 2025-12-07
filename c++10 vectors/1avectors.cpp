// A vector is a dynamic array in C++ which can grow or shrink in size at runtime. It is very much similar to the vectors.

// Feature	        Array       	        Vector
// Size	            Fixed       	        Dynamic (can grow or shrink automatically)
// Memory	        Stored in stack 	    Memory managed in heap internally
// Functions       No built-in functions	Many built-in functions (push_back, etc)
// size giving     size known in advance   size can increase or decrease anytime


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;  // this line means ki ek vector vec name ka bnao jike andhar ma integer datatype store ho.
    // by default this vector is of size 0.
    cout<<vec[0];   // jab hum ye run karna chahenga then huma dikhaga ek segmentation fualt.

    return 0;
}

// A Segmentation Fault (segfault) is a common runtime error that occurs when a program tries to access memory that it is not allowed to access.
// In simple words: Segmentation fault tab hota hai jab aapka program galat memory location ko access ya modify karne ki कोशिश करता है.

// NOTE: vector ka andhar ma bhi elements contiguous memory ma stor hota hai.