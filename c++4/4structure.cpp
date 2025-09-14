// Array of structures:- 

#include <iostream>

using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student arr[3] = { {101, 85.5}, {102, 90.0}, {103, 78.2} };

    for(int i = 0; i < 3; i++) {
        cout << arr[i].roll << " " << arr[i].marks << endl;
    }
    return 0;
}
