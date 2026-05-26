#include <iostream>
#include <vector>
#include <map>
using namespace std;

//? Optimal Solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int num = nums[i];
            int moreValue = target - num; //? or num[i]; instead of declaring num varible

            if(mpp.find(moreValue) != mpp.end()){
                return {mpp[moreValue], i};
            }

            mpp[num] = i;
        }
        return {-1, -1};
    }
};

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    vector<int> ans = obj.twoSum(nums, target);

    cout << "Indices: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

//? Brute froce

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {}; // No solution found
//     }
// };