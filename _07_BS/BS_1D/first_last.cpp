#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int last(vector<int>& nums, int target,int low, int high) {
        int last = -1;

        while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target){
            last = mid, low = mid + 1;
        } 
        else if (nums[mid] >= target) high = mid - 1;
        else low = mid + 1;
        }

        return last;
    }

public:
    int first(vector<int>& nums, int target,int low, int high) {
        int first = -1;

        while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target){
            first = mid, high = mid - 1;
        } 
        else if (nums[mid] >= target) high = mid - 1;
        else low = mid + 1;
        }

        return first;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first_pos = first(nums, target, 0, n - 1);

        if(first_pos == -1) return {-1, -1};
        int last_pos = last(nums, target, 0, n -1);

        return {first_pos, last_pos};
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = sol.searchRange(nums, target);

    cout << "The first and last positions of the target are: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}