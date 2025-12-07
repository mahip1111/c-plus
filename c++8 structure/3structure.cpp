// Initializing the structure:-

#include <iostream>

using namespace std;

    struct Point {
    int x, y;
};

int main() {
    Point p1 = {10, 20};   // direct initialization
    Point p2; 
    p2.x = 5; 
    p2.y = 15;

    cout << "p1: (" << p1.x << ", " << p1.y << ")\n";
    cout << "p2: (" << p2.x << ", " << p2.y << ")";
    return 0;
}
