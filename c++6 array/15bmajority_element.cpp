// same as the above concept and here we just use the vector concept.

#include <iostream>
#include <vector>
using namespace std;

int majorityelement(vector<int> nums) {
    int n = nums.size();

    for (int val : nums) {
        int freq = 0;

        for (int el : nums) {
            if (el == val) {
                freq++;
            }
        }

        if (freq > n / 2) {
            return val;
        }
    }

    return -1; // if no majority element found
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = majorityelement(nums);

    if (ans != -1)
        cout << "Majority element is: " << ans << endl;
    else
        cout << "No majority element found" << endl;

    return 0;
}
