//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <=4; i++)
    {
        for (int j = 4; j>i; j--)
        {
            cout<<" ";
        }
        for ( int k=1; k<=i; k++)
        {
            cout<<k;
        }
        for (int m=i; m>1; m--)
        {
            cout<<(m-1);
        }
        cout<<endl;
           
    }
    
    return 0;
}