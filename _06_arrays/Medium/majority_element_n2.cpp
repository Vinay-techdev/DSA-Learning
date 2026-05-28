//? Find the Majority Element that occurs more than N/2 times
//? Boyer–Moore majority voting algorithm,
#include <bits/stdc++.h>
using namespace std;

//? Optimal Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        int cnt = 0;
        int el; 
        
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (el == nums[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }
        
        /* Checking if the stored element
         is the majority element*/

        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }
        
        //return element if it is a majority element
        if (cnt1 > (n / 2)) {
            return el;
        }
        
        return -1;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}

//? Better Apporach

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int, int> mp;
        
//         // Count occurrences of each element
//         for (int num : nums) {
//             mp[num]++;
//         }
        
//         /* Iterate through the map to
//         find the majority element*/
//         for (auto& pair : mp) {
//             if (pair.second > n / 2) {
//                 return pair.first;
//             }
//         }

//         return -1;
//     }
// };

//? Brute Apprach

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int cnt = 0; 
            
//             // Count the frequency of nums[i] in the array
//             for (int j = 0; j < n; j++) {
//                 if (nums[j] == nums[i]) {
//                     cnt++;
//                 }
//             }
            
//             // Check if frequency of nums[i] is greater than n/2
//             if (cnt > (n / 2)) {
//                 // Return the majority element
//                 return nums[i]; 
//             }
//         }

//         return -1; 
//     }
// };