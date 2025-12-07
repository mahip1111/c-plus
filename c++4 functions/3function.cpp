// example of pass by value in c++

#include <iostream>
using namespace std;

void change(int x) {
 x = 10;
}

int main() {
    int a = 5;
    change(a);
    cout << a;  // Output: 5
    return 0;
}

// call by value se value change nhi hoti hai only call by refrence and call by pointer se hi value change hoti hai.

// in c we have only call by value and call by pointer(which is also known as the call by refrence or call by adress) but in c++ we have call by value, call by refrence and also call by pointer(call by adress)
