#include <iostream>
using namespace std;
 
int main()
{
    for (int i = 0; i <= 10; i++)   // loop runs from 0 to 10
    {
        if (i < 6)                  // check if i is less than 6
        {
            continue;                // skip the rest of this iteration
        }
        cout << i << " ";           // print i if it’s not skipped
    }
    return 0;
}

// continue is used to skip the iteration.