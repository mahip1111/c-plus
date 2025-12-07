// vector pair with mixed data. 

#include <iostream>
#include<vector>
using namespace std;

int main() {

vector<pair<string, int>> info;
info.push_back({"Manav", 19});
info.push_back({"Rahul", 21});

for(auto &p : info) {
    cout << p.first << " " << p.second << endl;
}

    return 0;
}