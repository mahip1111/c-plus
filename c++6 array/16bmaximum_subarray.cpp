// M2. BRUT FORCE METHOD.  time complexity O(n^2).

// basically pichle wala ma apna 

#include <iostream>
#include <vector>
#include <climits>  
using namespace std;

int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int maxSum = INT_MIN;     

    for (int start = 0; start < n; start++) {   // this line is used to find the starting index of the subarray
        int currSum = 0;
        for (int end = start; end < n; end++) {    // this line is used to find the ending index of the subarray
            currSum += nums[end];    
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout <<"The maximum sum possible from all the possible subarray is: "<< maxSubArray(nums);
}
