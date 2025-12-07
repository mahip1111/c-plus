#include <iostream>

using namespace std;

int main()
{
    float a=34.56;
    cout<<"The value of a was:- "<<a<<endl;
    a=45;     // change the value of a 
    cout<<"The value of a is:- "<<a<<endl;
    // See jo c++ ma agr 45 float ha toh wo 45 print hoga na ki 45.000 jaise ki other languages ka float print hota hai.

    // Constant variable= wo varoable jinki value aap bnana ke badh change nhi kar sakta.
    // Example:-

    const int r= 45;
    // r=67   // This time this will show error bcz r is a constant variable.
    cout<<"The vale of r will remain the same and is equal to:- "<<r<<endl;



    return 0;
}