// Structure wiht functions:-

#include <iostream>

using namespace std;

struct Rectangle {
    int length, breadth;
};

// Function that takes structure as argument
int area(Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    Rectangle rect = {10, 5};
    cout << "Area = " << area(rect);
    return 0;
}
