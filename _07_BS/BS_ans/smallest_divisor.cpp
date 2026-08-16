#include <bits/stdc++.h>
using namespace std;

//? Book Allocation Problem, Split array - largest sum and Painter's Partition all are similar

class Solution {
public:
    int findMax(vector<int>& nums, int n){
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
        }

        return maxi;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = findMax(nums, n);
        int ans = -1;

        while(low <= high){

            int mid = low + (high - low) / 2;
            long long sum = 0;

            for(auto num: nums){
                sum += (num + mid - 1) / mid;
                // eqaullly to ceil((double)num / mid);
            }

            if(sum <= threshold) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;

        }

        return ans;
    }
};

int main() {
    Solution solver;
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = solver.smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}