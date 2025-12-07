#include <iostream>

using namespace std;

int main()
{
    // Operator Precedence

    //   https://en.cppreference.com/w/cpp/language/operator_precedence.html    (you can go on this link to know precedence and associavity of operators in c++.)

    int a =3, b=4, c=9;
    int d = (a/b*c + b*c + b/a/c);    // I think it is same as we did in c language.
    // ans =36 bcz a/b=0 due to int int give int then b*c=36 then b/a/c=1/9=0 due to int int give int
    cout<<d;
    return 0;

}