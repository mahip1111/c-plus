// The syntax of do while loop is like:-
// do
// {
//     statements;
// } while (test condition);

#include <iostream>
using namespace std;
 
int main()
{
    int i = 5;
    do
    {cout << i <<endl;
        i++;
    } while (i < 5);
 
    return 0;
}
