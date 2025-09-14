// Arithmetic Operators in c++:-

// The function "a+b", will add a and b values and print them.
// The function "a-b "will subtract a and b values and print them.
// The function "a*b" will multiply a and b values and print them.
// The function "a/b ", will divide a and b values and print them.
// The function "a%b ", will take the modulus of a and b values and print them.(means it tells the remainder)
// The function "a++" will first print the value of a and then increment it by 1.
// The function "a--", will first print the value of a and then decrement it by 1.
// The function "++a", will first increment it by one and then print its value.
// The function "--a", will first decrement it by one and then print its value.

#include <iostream>

using namespace std;

int main()
{
    int a=50;   // you here can also take these inputs from the user.
    int b=198;
    float c=100;
    int k= a+b;
    int e=2;
    int u=10;
    cout<<"The remainder when d divided by a is:- "<<b%a<<endl;

    cout<<k<<endl;

    // cout<<a^b;  This is not applicable here to get a raised to power b.

    // NOTE:- Modular fxn. works only on int data type and not on the float dat type.

    cout<<b/a<<"\n";   // This will print 3 bcz b/a will give 3.9 and since finally ye int ha therefore it will become 3 aur main toh ye hai ki yahan par bhi same c language wala concept lagt hai ki int int give int  and to get float for this kise ek ko toh float hona hi chahiya.
    // Therefore to get the ans aap inme se kisi ek ko float bna doh ya donon ko float bna doh
    cout<<c/a;   // Now it will work propeerly.

    return 0;
}