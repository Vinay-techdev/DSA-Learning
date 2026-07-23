#include <bits/stdc++.h>
using namespace std;

//? Optimal Apporach
class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        
        int index = -1;

        // Find the first decreasing element from end
        for (int i = nums.size() - 2; i >= 0; i--) {
            
            // If a smaller element found
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // If no such index found
        if (index == -1) {
            // Reverse the entire array
            reverse(nums.begin(), nums.end());
            return nums;
        }

        // Find element just greater than nums[index]
        for (int i = nums.size() - 1; i > index; i--) {
            // Swap the two
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the part after index
        reverse(nums.begin() + index + 1, nums.end());
        return nums;
    }
};

//? Brute-force Apporach
// class Solution {
// public:
//     vector<int> nextPermutation(vector<int>& nums) {

//         vector<vector<int>> all;

//         sort(nums.begin(), nums.end());

//         do {
//             all.push_back(nums);
//         } while (next_permutation(nums.begin(), nums.end()));

//         for (int i = 0; i < all.size(); i++) {
//             if (all[i] == nums) {
//                 // If it's the last permutation
//                 if (i == all.size() - 1)
//                     return all[0];
//                 // Return the next one
//                 return all[i + 1];
//             }
//         }

//         return nums;
//     }
// };

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<int> result = sol.nextPermutation(nums);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
