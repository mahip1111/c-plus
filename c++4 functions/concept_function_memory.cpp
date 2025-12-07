// Q: Inteview question tell me can i use the return inside the void return datatype of the function if yes then tell how ?

// Yes, you can use return inside a void function in C or C++, but there are some rules and subtleties. Let me explain carefully.

// 1. void function basics
// A function declared as:
// void myFunction() {
//     // function body
// }
// does not return any value. That’s why the return type is void.

// 2. Using return; in a void function: Even though a void function does not return a value, you can use return; by itself.
// Example:
// #include <iostream>
// using namespace std;

// void checkNumber(int n) {
//     if (n < 0) {
//         cout << "Negative number, exiting function early." << endl;
//         return;  // exit function immediately
//     }
//     cout << "Number is non-negative: " << n << endl;
// }

// int main() {
//     checkNumber(-5);  // Will exit early
//     checkNumber(10);  // Will continue
//     return 0;
// }
// Output:
// Negative number, exiting function early.
// Number is non-negative: 10

// Reason of the output:
// Here, return; just stops the execution of the function and returns control to the caller. There is no value returned.

// 3. What you cannot do: You cannot write return value; inside a void function.
// void myFunction() {
//     int x = 5;
//     return x;  // ❌ Error! Can't return a value from void function
// }
// This will give a compile-time error because void means “no return value allowed”.

// ✅ Key points to remember:
// return; → allowed, just exits the function.
// return <value>; → not allowed in void functions.

// Useful for early exits in void functions when certain conditions are met.