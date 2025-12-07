//  Variable can be defined as a container to hold data. Variables are of different types, for example:-

// Int-> Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
// Float-> Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
// Char-> Char is used to store a single character e.g. ('a', 'b',' c', 'd')
// Boolean-> Boolean is used to store "true" or "false."
// Double-> Double is also used to store decimal numbers but has more precision than float, e.g. (10.5895758440339...)

// Rules for Naming Variables:-
// 1.The name must begin with a letter (A-Z or a-z) or an underscore _.
// 2.After the first letter, you can use letters, digits (0-9), and underscores.
// 3.No special characters (like @, $, #) are allowed.
// 4.No spaces in variable names.
// 5.A variable cannot be a reserved keyword (like int, float, if, etc.).
// 6.Examples of valid names: x, count, total_marks, _temp
// 7.Examples of invalid names: 2age, my name, float

#include <iostream>

using namespace std;

int main()
{
    int a=2, r=6;
    float b=3.45;
    char c ='a';    // Remember char store only one letter.    // note char c="a" is not valid here.
    bool k= true;  

    cout<<"This is Maheep here.\nHere the value of a is:- "<<a<<". \nThe value of b is:- "<<b;
    // or you can do the same like:- (But it consume many lines.)
    cout<<"\n\nThis is Maheep here.";
    cout<<"\nHere the value of a is:- ";
    cout<<a;
    cout<<"\nThe value of b is:- ";
    cout<<b;
    cout<<"\nThe value on printing k is 1 bcz boolean true=1 and false=0 here";
    cout<<"\nHence ans on printing k is:- ";
    cout<<k;

    return 0;
}

// NOTE:- // int z; z = b*c; legal 
// int z; b*c = z; illegal (not allowed)