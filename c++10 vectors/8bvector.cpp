// sorting of array in descending order: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3};

    sort(v.rbegin(), v.rend());

    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
}
