
//? Longest Consecutive Sequence in an Array

#include <bits/stdc++.h>
using namespace std;

//? Optimal Apporach
class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        // If the array is empty
        if (n == 0) return 0; 
    
        int longest = 1; 
        unordered_set<int> st;
    
        // Put all the array elements into the set
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
    
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
            
                int cnt = 1; 
                int x = it; 
    
                while (st.find(x + 1) != st.end()) {
                    
                    x = x + 1; 
                    cnt = cnt + 1; 
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

//? Better Apporach
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();

//         if (n == 0) return 0; 

//         sort(nums.begin(), nums.end()); 

//         int lastSmaller = INT_MIN; 
//         int cnt = 0; 
//         int longest = 1; 

//         for (int i = 0; i < n; i++) {

//             // If consecutive number exists
//             if (nums[i] - 1 == lastSmaller) {
//                 cnt += 1; 
//                 lastSmaller = nums[i]; 
//             } 

//             // If consecutive number doesn't exits
//             else if (nums[i] != lastSmaller) {
//                 cnt = 1; 
//                 lastSmaller = nums[i]; 
//             }
//             longest = max(longest, cnt); 
//         }
//         return longest;
//     }
// };


// //?Brute-force Apporach
// class Solution {
// private:
//     bool linearSearch(vector<int>& a, int num) {
//         int n = a.size(); 
        
//         for (int i = 0; i < n; i++) {
//             if (a[i] == num)
//                 return true;
//         }
//         return false;
//     }

// public:
//     // Function to find the longest consecutive sequence
//     int longestConsecutive(vector<int>& nums) {
//         // If the array is empty
//         if (nums.size() == 0) {
//             return 0;
//         }
//         int n = nums.size();
        
//         int longest = 1; 

//         for (int i = 0; i < n; i++) {
    
//             int x = nums[i]; 
//             int cnt = 1; 

//             while (linearSearch(nums, x + 1) == true) {
//                 x += 1; 
//                 cnt += 1; 
//             }

//             longest = max(longest, cnt);
//         }
//         return longest;
//     }
// };

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2};

    Solution solution;

    int ans = solution.longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n"; 
    return 0;
}
