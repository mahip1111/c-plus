#include <iostream>

using namespace std;

int n;   // declaring the variable.

int main()
{
    int i;
    static int k;
    cout<<n<<endl<<i<<endl<<k<<endl;
    return 0;
}

// NOTE:- 1)  Unitialized local variables --> garbage value.
// 2) Unitialized global/static variables --> 0
// During the process of the declaration the memory is allocated to the certin data type.
