// write a code using the ternary operator to tell the greatest of two numbers ?

// #include <iostream>
// using namespace std;

// int main() {int i,k;
//     cout<<"Enter the two numbers: ";
//     cin>>i>>k;    //you canot do cin>>i,k; in c++
//     cout<<"Greatest of "<<i<<", "<<k<<" is: "<<(i>k?i:k);
//     return 0;
// }

// more clean version of this code: 

// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     int greatest = (num1 > num2) ? num1 : num2;

//     cout << "The greatest number is: " << greatest << endl;

//     return 0;
// }

// other better method

#include <iostream>
using namespace std;

int main() {
    int i, k;

    cout << "Enter two numbers: ";
    cin >> i >> k;

    cout << (i == k ? "Both numbers are equal": (i > k ? "First number is greater": "Second number is greater"));   //use of nested ternary operators.

    return 0;
}
