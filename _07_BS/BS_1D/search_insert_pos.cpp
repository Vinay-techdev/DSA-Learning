#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = n;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {3, 5, 8, 15, 19};  
    int n = arr.size();                 
    int x = 9;                         

    Solution sol;
    int ind = sol.searchInsert(arr, x);

    cout << "The insertion position is: " << ind << "\n";
    return 0;
}