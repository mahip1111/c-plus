// call by refrence in c++

#include <iostream>
using namespace std;

void change(int &x) {
x = 10;
}

int main() {
    int a = 5;
    change(a);
    cout << a;  // Output: 10
    return 0;
}