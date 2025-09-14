// Data types in C++ are categorized into three groups:

// Built-in data types:-
// These data types are pre-defined for a language and could be used directly by the programmer.
// Examples are: Int, Float, Char, Double, Boolean

// User-defined data types:-
// These data types are defined by the user itself.
// Examples are: Class, Struct, Union, Enum

// Derived data types:-
// These data types are derived from the primitive built-in data types.
// Examples are: Array, Pointer, Function

#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of boolean: " << sizeof(bool) << " bytes" << endl;
    return 0;
}
