// METHOD 2.   // both the methods are done by the brut force approch bus farak itna sa ha ki ek ma loops ki madat sa kiya hai and ek ma functions ki help se kiya hai.

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (nums[i] + nums[j] == target )    // YE jo nested loop use kiya ha ise hi hum kehta hai brutforce approach and its time complexity is O(n^2).
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;      // NOTE: Aap vector ko return statement ka use karva ka return karva sakta ho.
            }
            
        }
        
    }
    return ans;   
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target =9;
    vector<int> ans = pairsum(nums, target);
    cout<<"The requird pair is: "<<"("<<ans[0]<<", "<<ans[1]<<")"<<endl;
 
    return 0;
}