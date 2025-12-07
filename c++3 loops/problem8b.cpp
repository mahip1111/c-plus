// another method to solve the same problem.

// A B C D 
// A B C D
// A B C D
// A B C D

#include <iostream>
using namespace std;

int main() {
     for ( int i = 1; i <=4; i++)
     {  char ch='A';
        for (int j = 1; j <=4; j++)
        {
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
        
     }
     
    return 0;
}