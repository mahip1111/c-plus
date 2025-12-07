// :: is called as scope resolution operator.

//Q:-How you will print global variable inside the int main()fxn. which have local variable with the same name.

#include <iostream>

using namespace std;

int global=67;

int main()
{
    int global=45;
    cout<<global<<endl;   // This will print the local variable 
    cout<<::global<<endl; // This will print the global variable

    return 0;
}

// in c this concept is only possible with the help of the fuction there are others method but they are not safe(recommended).
