//2. Using the emplace_back

// NOTE: Emplace back method is more efficient then the push_back method.
// Reason find it later

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(10);  // with the help of the pushback you can add the element at the last of the vector(same for this.)
    v.emplace_back(20);
    v.emplace_back(40);

    // push_back aur isme aap jis element ko pehle add karta ho wo pehli position ma then second, third and go on...
    
    cout<<"Elements after emplace_back: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}