#include <iostream>

using namespace std;

int main()
{
    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder

    // Jasie rohan das banda ek ha par uska name alag alag hai waise hi yahan par variable toh ek hi hai wo hai a par uska name alag alag hai.

    int a=2;
    int &b=a;    //b is refrence to a
    int &c=b;
    // a, b and c point to the same memory location and change made to the b and c also change the a.
    cout<<"The value of a is:- "<<a<<"\n"<<"The value of b is:- "<<b<<"\n"<<"The value of c is:- "<<c;
    
    return 0;
}