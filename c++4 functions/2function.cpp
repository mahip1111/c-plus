#include <iostream>
using namespace std;

// 1. No parameters, no return value
void greet() {
    cout << "Hello!" << endl;
}

// 2. Parameters, no return value
void printSum(int a, int b) {
    cout << "Sum = " << a + b << endl;
}

// 3. No parameters, with return value
int giveFive() {
    return 5;
}

// 4. Parameters with return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    greet(); // Type 1
    printSum(2, 3); // Type 2
    cout << "Number: " << giveFive() << endl; // Type 3
    cout << "Product: " << multiply(4, 5); // Type 4
    return 0;
}

// NOTE: Type 1 and 2 ko aap cout ka andhar ma nhi use kar sakta bcz uski koi return value nhi hai this is the same concept as discussed in c.
