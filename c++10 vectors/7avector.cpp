// Vector of pair = vector<pair<T1, T2>>

// Why use vector of pairs?
// Jab tumhe 2 values ko saath me store karta ho:
// roll no + marks
// x + y coordinate

#include <iostream>
#include<vector>
using namespace std;

int main() {
vector<pair<int, int>> v;

v.push_back({1, 10});
v.push_back({2, 20});
v.push_back({3, 30});

for(auto &p : v) {
    cout << p.first << " " << p.second << endl;
}

    return 0;
}