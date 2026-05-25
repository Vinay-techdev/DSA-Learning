#include <bits/stdc++.h>
using namespace std;

//? Optimal Approach
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        
        int maxLen = 0;
        
        int left = 0, right = 0;
        
        int sum = nums[0];
        
        while(right < n) {
            
            // If the sum exceeds K, shrink the window
            while(left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            
            // store the maximum length
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            
            right++;
            if(right < n) sum += nums[right];
        }
        
        return maxLen;
    }
};

int main() {
	vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
	Solution sol;

	int ans = sol.longestSubarray(nums, k);

	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}


//? Brute froce approach

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
// public:
//     int longestSubarray(vector<int> &nums, int k){
//         int n = nums.size();

//         int maxLen = 0;
        
//         int left = 0, right = 0;
        
//         int sum = nums[0];
        
//         while(right < n) {
            
//             // If the sum exceeds K, shrink the window
//             while(left <= right && sum > k) {
//                 sum -= nums[left];
//                 left++;
//             }
            
//             // store the maximum length
//             if(sum == k) {
//                 maxLen = max(maxLen, right - left + 1);
//             }
            
//             right++;
//             if(right < n) sum += nums[right];
//         }
        
//         return maxLen;
//     }
// };

// int main() {
// 	vector<int> nums = {10, 5, 2, 7, 1, 9};
//     int k = 15;
    
// 	Solution sol;

// 	int ans = sol.longestSubarray(nums, k);

// 	cout << "The length of longest subarray having sum k is: " << ans;

// 	return 0;
// }
