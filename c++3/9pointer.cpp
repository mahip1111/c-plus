#include <iostream>

using namespace std;

int main()
{
    int marks[] = {99, 100, 38};
    int *p = marks;
    cout << "The value of marks[0] is " << *p << endl;
    cout << "The value of marks[1] is " << *(p + 1) << endl;    // *(p+1) will push to the next index.
    // Actually here adress ma utni bytes add hui hai jitni ek int leta hai.
    
    return 0;
}