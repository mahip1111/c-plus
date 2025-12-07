/* Logical operators:-
The function "((a==b)&& (a<b))"  The output will be 1 if both expressions are true and 0 if not.
The function "((a==b) || (a<b))", The output will be 1 if any one of the expressions is true and 0 if both are false.
The function "(!(a==b))", this print reverde i.e if "a" and "b" are equal then output will be 0. */

#include <iostream>

using namespace std;

int main()
{
    int a=34, b=45;
    cout<<((a==b) && (a>b))<<endl;   // 0 bcz both the statement are false
    cout<<((a==b) || (a<b))<<endl;   // 1 bcz one is false and second one is true
    cout<<(!(a==b))<<endl;           // 1 
    return 0;
}