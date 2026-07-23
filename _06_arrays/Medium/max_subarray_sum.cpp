//* Kadane's Algorithm : Maximum Subarray Sum in an Array

#include<bits/stdc++.h>
using namespace std;

//? Follow Up
class Solution2 {
public:
    int maxSubArray2(vector<int>& nums) {
        
        long long maxi = LLONG_MIN; 
        
        long long sum = 0;
        
        // starting index of current subarray
        int start = 0; 
        
        // indices of the maximum sum subarray
        int ansStart = -1, ansEnd = -1; 
        
        for (int i = 0; i < nums.size(); i++) {
            
            // update starting index if sum is reset
            if (sum == 0) {
                start = i;
            }
            
            // add current element to the sum
            sum += nums[i]; 
            
            /* Update maxi and subarray indices if current sum is greater*/
            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0;
            }
        }
        
        // Printing the subarray
        cout << "The subarray is: [";
        for (int i = ansStart; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
        cout << "]" << endl;
        
        return maxi;
    }
};


//? Optimal Apporach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        long long maxi = LLONG_MIN; 
        
        long long sum = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            
            sum += nums[i]; 
            
            // Update maxi if current sum is greater
            if (sum > maxi) {
                maxi = sum; 
            }
            
            // Reset sum to 0 if it becomes negative
            if (sum < 0) {
                sum = 0; 
            }
        }
        // If subarray is empty
        if(maxi < 0) maxi = 0;
        return maxi;
    }
};

//? Better Apporach
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         int maxi = INT_MIN; 

//         for (int i = 0; i < nums.size(); i++) {
            
//             int sum = 0; 
            
//             for (int j = i; j < nums.size(); j++) {

//                 sum += nums[j];
//                 maxi = max(maxi, sum);
//             }
//         }
//         return maxi;
//     }
// };

//? Brute Froce Apporach
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
        
//         // Initialize maximum sum with the smallest possible integer
//         int maxi = INT_MIN; 

//         // Iterate over each starting index of subarrays
//         for (int i = 0; i < nums.size(); i++) {
            
//             /* Iterate over each ending index of subarrays starting from i*/
//             for (int j = i; j < nums.size(); j++) {
                
//                 int sum = 0; 

//                 // Calculate the sum of subarray nums[i...j]
//                 for (int k = i; k <= j; k++) {
//                     sum += nums[k];
//                 }

//                 maxi = max(maxi, sum);
                
//             }
//         }
//         return maxi; 
//     }
// };

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    Solution sol;
    Solution2 sol2;

    
    int maxSum = sol.maxSubArray(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;

    int maxSum2 = sol2.maxSubArray2(arr);
    cout << "The maximum subarray sum is: " << maxSum2 << endl;

    return 0;
}
