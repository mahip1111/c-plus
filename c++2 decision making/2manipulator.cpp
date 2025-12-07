// Manipulator:-
// In C++ programming, language manipulators are used in the formatting of output. These are helpful in modifying the input and the output stream. They make use of the insertion and extraction operators to modify the output.
// Here’s a list of a few manipulators:-  setw(), endl, setprecision(), setbase().

// "endl" is used for the next line.
// "setw" is used to specify the width of the output.
// "setprecision() is used to control the number of digits displayed for floating-point numbers (float, double, long double)."
// "setbase()"    iske bare ma explore karo.

#include <iostream>
#include <iomanip>  // we use this header file to get the access of setw, setbase(), setprecision() and  operator.

using namespace std;

int main()
{
    int a=45679, b=46, c=68;
    float d=3.26376786;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl<<endl;

    // setw se kya hota hai ki text ke badh apko kitni jagha chahiya wo fix ho jata hai but agr apka integer badha hai aur setw ma width choti ha us case ma bhi number toh print pura hoga bas wo apna aap ki width ka bahar chala jayega.

    cout<<setprecision(4)<<d<<endl<<endl;    // Ans 3.264;
    return 0;
}