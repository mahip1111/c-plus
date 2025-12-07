// sorting of the array:    by default ascending order

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3};

    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int x : v) cout << x << " ";
}
