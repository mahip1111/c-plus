// Concept of the pointer in the array.
#include <iostream>

using namespace std;

int main()
{
    int marks[] = {99, 100, 38};
    int *p = marks;    // marks= &marks[0]
    // Basically here p contains the adress of the marks[0].
    cout << "The value of marks[0] is " << *p << endl;
    return 0;
}