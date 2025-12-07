// 2. Push Back Se Elements Input Lena (Dynamic Size)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the vector: ";
    cin >> n;

    vector<int> v;

    cout<<"Enter the elements of the vector: \n";

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);   // this will be told on the next files.
    }

    cout<<"Vector created by you is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
}
