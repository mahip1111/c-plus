// #include <iostream>
// using namespace std;

// int main() {
//     int i;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     if (i==1)
//     {
//         cout<<"statement 1";
//     }

//     if (i=2)
//     {
//         cout<<"statement 2";
//     }

//     else{
//         cout<<"default statement";
//     }
    
//     return 0;
// }


#include <iostream>
using namespace std;
 
int main()
{
    int i;
    cout<<"Enter the value of i: ";
    cin>>i;
    switch (i)
    {
    case 1:
        cout << "Statement 1" << endl;
        break;
 
    case 2:
        cout << "Statement 2" << endl;
        break;
 
    default:
        cout << "Default statement!" << endl;
    }
}

// switch case is preffered in the case bcz huma bar bar i ko compare nhi karna padega ye wala task switch automatically khud hi kar dega.