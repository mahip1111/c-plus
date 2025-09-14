// Input stream:
// In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

// Output stream:
// In the output stream, the direction of flow of bytes occurs from the main memory to the output device (for ex-display)

#include <iostream>
using namespace std;
 
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;                        // Getting input from the user
    cout << "Your number is: " << num; // Displaying the input value
    return 0;
}

// The sign << is called the insertion operator.
// The sign >> is called the extraction operator.
// cout keyword is used to print.
// cin keyword is used to take input at run time