#include <bits/stdc++.h>
using namespace std;

//? using mini variable to store the minimum value
class Solution {
public:
    int findMin(vector<int>& nums) {
        int high = nums.size() - 1;
        int low = 0, mini = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;

            if(nums[low] <= nums[mid]){
                mini = min(mini, nums[low]);
                low = mid + 1;
            } else {
                high = mid - 1;
                mini = min(mini, nums[mid]);
            }
        }

        return mini;
    }
};

//? using low variable to return the minimum value without using any extra variable
class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0, high = nums.size() - 1;

        while (low < high) {

            int mid = low + (high - low) / 2;

            // Check which half to discard
            if (nums[mid] > nums[high]) {

                // Minimum lies in right half
                low = mid + 1;

            } else {

                // Minimum lies in left half (including mid)
                high = mid;
            }
        }

        return nums[low];
    }
};

int main() {

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    Solution sol;
    int result = sol.findMin(nums);

    cout << "Minimum element is " << result << endl;

    return 0;
}
