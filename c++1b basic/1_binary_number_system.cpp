// basics of the binary number system are done in the dsa notebook

// Q: Write a code to convert the decimal number into binary number?

#include <iostream>
using namespace std;

int main() {
    int decnum, ans=0, pow=1;      // pow=1=10^0
    cout<<"Enter the value of decimal number: ";
    cin>>decnum;
    int original=decnum;
    while (decnum>0)
    {
        int rem= decnum%2;
        decnum= decnum/2;
        ans+= rem*pow;
        pow*=10;
    }
    cout<<"Binary form of "<<original<<" is: "<<ans;
    
    return 0;
}

// actually tum note karo ki first remainder ko multiply kiya 10^0 se and second ko 10^1 se and go on....  bus isse concept ko hum likh raha hai yahan par.
