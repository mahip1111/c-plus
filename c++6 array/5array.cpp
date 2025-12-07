#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];  // ✅ Now n is known  (aapko jab tak n nhi pta hoga tab tak aap arr ko define nahi kar paoga.ṇ)

    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "The element at index " << i << " is: " << arr[i] << endl;
    }

    return 0;
}
