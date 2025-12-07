// Ways to know the size of the vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
cout<<v[0]<<endl;
cout<<v.size();    // this is the way to know the size of the vector.

return 0;
}