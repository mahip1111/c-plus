// Input and output functions

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */
    // cin>> use karne se next text apna aap jo aap cout se loga wo next line ma chala jayega.

    cout<<"Enter the value of num2:"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}

/* Another way to run c++ code is:- 
1. Open the new terminal
2. Then write g++ .\5basic.cpp and then enter.
3. Then write .\5basic.exe and enter.        
4. This will finally run the code. */
