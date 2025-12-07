// A structure (struct) in C++ is a user-defined data type that groups different types of variables under one name.
// It’s useful when you want to represent a real-world entity with multiple attributes.

#include <iostream>
using namespace std;

struct Student {
    int roll;
    char grade;
    float marks;
};

int main() {
    Student s1;  // structure variable
    s1.roll = 101;
    s1.grade = 'A';
    s1.marks = 92.5;

    cout << "Roll: " << s1.roll<<endl << "Grade: " << s1.grade <<endl<< "Marks: " << s1.marks;
    return 0;
}

// Key Features of the structures are:-
// A structure can contain variables of different data types.
// Members are public by default (unlike class, where members are private by default).
// Multiple variables of the same structure type can be created.
