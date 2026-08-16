#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> findMaxSum(vector<int>& nums, int n){
        int maxi = INT_MIN, sum = 0;

        for(int i = 0; i < n; i++){
            maxi= max(maxi, nums[i]); 
            sum += nums[i]; 
        }

        return {maxi, sum};
    }

public:
    int subarraySplitSum(vector<int>& nums, int mid, int n){
        int count = 1, total = 0;

        for(int i = 0; i < n; i++){
            
            if(total + nums[i] <= mid){
                total += nums[i];
            } else {
                total = nums[i];
                count++;
            }
        }
        
        return count;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k > n) return -1;

        auto [low, high] = findMaxSum(nums, n);
        int ans = -1;

        while(low <= high){

            int mid = (low + high) / 2;

            if(subarraySplitSum(nums, mid, n) > k){
                low = mid + 1;
            }
            else {
                high = mid - 1;  ans = mid;
            }
        }

        return low; // low
    }
};

int main() {
    Solution solver;
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = solver.splitArray(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}