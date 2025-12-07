// Q: Write a code to covert the binary number to a decimal.
#include <iostream>
using namespace std;

int main() {
    int binum, rem, ans = 0, pow = 1;   // pow= 1= 2^0

    cout << "Enter a binary number: ";
    cin >> binum;

    while (binum > 0) {
        rem = binum % 10;       // extract last digit
        ans = ans + rem * pow;  // add to ans result
        pow = pow * 2;      // increase pow (power of 2)
        binum = binum / 10;       // remove last digit
    }

    cout << "Decimal value = " << ans << endl;
    return 0;
}

// just remember the concept of how to convert binary to decimal.

// basiacally you are multiplying the last digit of the binary number with the 2^0 then second last digit with the 2^1 and go on.....   bus isse concept ko hum likh raha hai yahan par.