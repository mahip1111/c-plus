#include <iostream>
#include <typeinfo>    // this is added to get the acess of typeid().name() fxn.

using namespace std;

int main()
{    /***************Type casting (converting data type)*****************/
    int a= 35;
    float b= 45.6;
    float c= float(a);
    int d= 2;
    cout<<"The value of a is:- "<<(float)a<<endl;  // ye float ma ha but tumhe output ma pta nhi chalega.
    cout<<"The value of a is:- "<<float(a)<<endl;  // yahan par a float a ki tarha bas use ho raha hai na ki a int se float ma convert hua hai
    cout << "Type of a: " << typeid(a).name() << endl;  //This is the way to know the data type of a variabele
    // a toh int hi rahega.
    cout<<"The value of b is:- "<<int(b)<<endl;
    cout<<"The value of c is:- "<<int(b)<<endl;

    cout<<"The value of a/d is:- "<<float(a)/d<<endl;    // abh yahan par agr ans 17.5 lana ha toh float(a) karna jaruri ha otherwise ans 17 ata.
    cout<<"Otherwise ans is "<<a/d<<"\n";

    return 0;
}