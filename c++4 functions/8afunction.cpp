// concept of default argument.

#include <iostream>
using namespace std;

void greet(string name = "User") {
cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Paarth");
    greet(); // Uses default
    return 0;
}
