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
