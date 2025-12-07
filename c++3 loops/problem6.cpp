// Hum negative numbers ko prime numbers ke liye check nahi karte — kyunki prime number ka definition hi kehta hai ki: 🔹 “A prime number is a natural number greater than 1 that has exactly two factors — 1 and itself.” 

// Q: write a code to tell whether the number enterd by the user is prime or not?

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    // Prime numbers are greater than 1
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break; // stop checking once a divisor is found
            }
        }
    }

    if (isPrime)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";

    return 0;
}
