// Nested structure:- 

#include <iostream>

 using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    int roll;
    Date dob;  // structure inside another
};

int main() {
    Student s = {101, {12, 8, 2002}};
    cout << "Roll: " << s.roll <<endl<< "DOB: "<< s.dob.day << "/" << s.dob.month << "/" << s.dob.year;
}
