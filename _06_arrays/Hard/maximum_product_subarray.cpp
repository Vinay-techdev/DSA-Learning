#include <bits/stdc++.h>
using namespace std;

//? Optimal solution 1 : Two-pass approach
class Solution {
public:
    int maxProductSubArray(vector<int>& arr) {

        int n = arr.size();
        int pre = 1, suff = 1;

        int ans = INT_MIN;

        for (int i = 0; i < n; i++) {
            // Reset prefix if zero
            if (pre == 0) pre = 1;

            // Reset suffix if zero
            if (suff == 0) suff = 1;

            // Multiply prefix with current element from front
            pre *= arr[i];

            // Multiply suffix with current element from back
            suff *= arr[n - i - 1];

            // Update the maximum of all products seen so far
            ans = max(ans, max(pre, suff));
        }
        return ans;
    }
};

//? Optimal solution 2: Using Kadane's algorithm for maximum product subarray
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int res = nums[0];
        int maxProd = nums[0];
        int minProd = nums[0];

        for (int i = 1; i < nums.size(); i++) {
         
            int curr = nums[i];

            // If current number is negative, swap max and min
            if (curr < 0) swap(maxProd, minProd);

            // Update max and min product ending at current index
            maxProd = max(curr, maxProd * curr);
            minProd = min(curr, minProd * curr);

            // Update global result
            res = max(res, maxProd);
        }
        return res;
    }
};

//? Brute force solution
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProd = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            // Initialize current product to 1
            int prod = 1;

            // Inner loop picks the ending index
            for (int j = i; j < nums.size(); j++) {
                // Multiply current number to product
                prod *= nums[j];

                // Update maximum product if needed
                maxProd = max(maxProd, prod);
            }
        }

        return maxProd;
    }
};

int main() {

    vector<int> nums = {2, 3, -2, 4};
    Solution sol;

    cout << sol.maxProduct(nums);

    return 0;
}