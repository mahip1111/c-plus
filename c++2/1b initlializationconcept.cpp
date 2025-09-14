#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the value of n:- ";
    int n;
    cin>>n;
    cout<<"Enter the value of k\n";
    int k;
    cin>>k;
    cout<<"The value of n is:- "<<n<<endl;
    cout<<"The value of k is:- "<<k;
    return 0;
}

// NOTE:- When you enter 3.6 in cin:
// cin reads characters from input until it finds something invalid for an int.
// 3 is valid for an int, but the .6 is not.
// So cin stops at the . and stores only 3 in n.
// The leftover .6 remains in the input buffer.
// Next time you do cin >> k;:
// It tries to read k from what’s left in the buffer (the .6).
// Since . is not valid for an int, the input operation fails.
// k is not assigned a proper value (it remains uninitialized / garbage).
// From this point, further cin operations won’t work until you clear the error state.

// Note:- When you enter ten in cin:
// The first character t is invalid for an int.
// Extraction fails immediately.
// n is not assigned anything (stays uninitialized → garbage).
// cin enters fail state.
// cin >> k;
// Since cin is already in fail state, this line is skipped.
// k also remains uninitialized garbage.
// When comes to the printing values:
// Both n and k print garbage (compiler dependent) (whatever random bits were in memory).
// On many compilers, it might show 0, sometimes a random integer, or sometimes even the same number for both. It depends on your compiler and runtime environment.
