// concept of multiple default arguments 

#include <iostream>
using namespace std;

int add(int a, int b = 5, int c = 10) {
    return a + b + c;
}

int main() {
    cout << add(1, 2, 3) << endl; // 1 + 2 + 3 = 6
    cout << add(1, 2) << endl;    // 1 + 2 + 10 = 13
    cout << add(1) << endl;       // 1 + 5 + 10 = 16
    return 0;
}
