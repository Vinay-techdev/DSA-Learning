#include<bits/stdc++.h>
using namespace std;

//? Optimal Apporach
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
        
        if(nums.empty()) {
            return ans;
        }
        
        // Last element of the vector is always a leader
        int max = nums[nums.size() - 1];
        ans.push_back(nums[nums.size() - 1]);
        
        // Check elements from right to left
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] > max) {
                ans.push_back(nums[i]);
                max = nums[i];
            }
        }
        
        // Reverse the vector to match the required output order
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};


//? Brute-force Apporach
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            bool leader = true;

            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] >= nums[i]) {
                    /* If any element to the right is greater 
                    or equal, nums[i] is not a leader*/
                    leader = false;
                    break;
                }
            }

            // If nums[i] is a leader, add it to the ans vector
            if (leader) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 3, 1, 2};

    Solution finder;

    vector<int> ans = finder.leaders(nums);

    cout << "Leaders in the array are: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}