#include <bits/stdc++.h>
using namespace std;

//? Optimal approach - Dutch National Flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid=0, low = 0, high = n-1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1) mid++;
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {1, 0, 2, 1, 0};

    Solution obj;
    obj.sortColors(nums);
  //obj.sortZeroOneTwo(nums);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}

//? Brute force apporach
// class Solution {
// public:
//     void sortZeroOneTwo(vector<int>& nums) {
//         int count0 = 0, count1 = 0, count2 = 0;

////         Count the frequency of 0s, 1s, and 2s in the array
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] == 0) count0++;
//             else if(nums[i] == 1) count1++;
//             else count2++;
//         }

//         int index = 0;

//         // Fill with 0s
//         while(count0--) {
//             nums[index++] = 0;
//         }

//         // Fill with 1s
//         while(count1--) {
//             nums[index++] = 1;
//         }

//         // Fill with 2s
//         while(count2--) {
//             nums[index++] = 2;
//         }
//     }
// };