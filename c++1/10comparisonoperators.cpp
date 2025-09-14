/* Comparison operators:-
1. The function "(a==b)", will compare a and b values and check if they are equal. The output will be 1 if equal, and 0 if not.
2. The function "(a!=b)", will compare a and b values and check if "a" is not equal to "b". The output will be one if not equal and 0 if equal.
3. The function "(a>=b)", will compare a and b values and check if "a" is greater than or equal to "b". The output will be one if greater or equal, and 0 if not.
4. The function "(a<=b)", will compare a and b values and check if "b" is greater than or equal to "a". The output will be one if greater or equal, and 0 if not.
5. The function "(a>b)", will compare a and b values and check if "a" is greater than "b". The output will be one if greater and 0 if not.
6. The function "(a<b)", will compare a and b values and check if "b" is greater than "a". The output will be one if greater and 0 if not.*/

#include <iostream>

using namespace std;

int main()
{
    int a= 34;
    int b= 45;
    cout<<(a>b)<<endl;   // 0 bcz false
    cout<<(a<b)<<endl;   // 1 bcz true
    cout<<(a==b)<<endl;  // 0 bcz false
    cout<<(a!=b)<<endl;  // 1 bcz true
    cout<<(a>=b)<<endl;  // 0 bcz false
    cout<<(a<=b)<<endl;  // 1 bcz true
    
    return 0;
}