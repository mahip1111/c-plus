// Q:- Write a code in which you can know ki tumhara name ka pehla alphabet kya hai?

#include <iostream>

using namespace std;

int main()
{
    char name;
    cout<<"Enter your name:- ";
    cin>>name;
    cout<<name; 
    return 0;
}

// this will give the first letter bcz cin ke through jitna marzi bada word bna lo lekin char toh sirf ek character store karega.