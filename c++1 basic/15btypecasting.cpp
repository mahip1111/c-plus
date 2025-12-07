#include <iostream>
#include <typeindex>
using namespace std;

int main() {
    int x = 10;
    float y = x;    // (int → float)

    cout << "x = " << x << ", y = " << y << endl;
    cout << "Type of a: " << typeid(x).name() << endl;  // x toh int hi rahega.

    return 0;
}

// NOTE: Datatype ko doh tariqa sa convert kar sakta hai: 1.implicit(coverion)/impicit type conversion
// 2. explicit(casting)/type casting

// "IMPLICIT": autamatically covert ho jata hai bada data type ma generally like char ascii value ma convert ho jata hai and other (int int to int) and (float int to float)