// this method is much better bcz its time complexity is O(n).
// this concept is used bcz of sorted array condition given in the question.

// this method is known as two pointer approach.

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairsum = nums[i] + nums[j];

        if (pairsum == target) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        else if (pairsum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return ans; 
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairsum(nums, target);

    if (!ans.empty()) {   // ye if ma kya kiya hai ye padho ek bar.
        cout << "The required pair is: (" << ans[0] << ", " << ans[1] << ")" << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}
