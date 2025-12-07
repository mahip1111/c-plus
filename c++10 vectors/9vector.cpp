
#include <iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {    // we use this & here bcz we do here call by refrence and we know ki by default it is call by value if we donot use &. Therefore to make the change on the original vector we use call by refrence.

// Basically call by refrence sa ek "alies"(same varible bas name is different matlab mahip and manavendra both are same but name are different therfore any change to mahip will lead to the change in mananvendra. ) create ho jata hai.

    int n = nums.size();
    if (n == 1) return nums[0];

    // for (int i = 0; i < n-1; i ++) {
    //     if (nums[i] != nums[i+1]  && nums[i] != nums[i-1])
    //         return nums[i];
    // }
    // or
    for (int i = 0; i < n-1; i+=2)
    {
        if (nums[i] !=nums[i+1])
        {
            return nums[i];
        } 
    }
    return nums[n-1];  // bcz agar single wala element last ma hoga then usa ye code detect nahi kar payega therefore we return last element agar upar wala ma sa koi bhi return nahi chala.
}

int main() {
    vector<int> nums {1,1,2,2,3,3,4,4,5};
    cout<<"The element which is repeating just once is: "<<singleNonDuplicate(nums);
    return 0;
}

// single element na toh aga wala element sa match karega aur na hi picha wala sa but jo pair element hoga wo kisi ek sa match ho jayega.


 
