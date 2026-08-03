#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastOccurrence(vector<int>& nums, int target,int low, int high) {
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
    int firstOccurrence(vector<int>& nums, int target,int low, int high) {
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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, k, 0, n - 1);
    if (first == -1) return { -1, -1 };
    int last = lastOccurrence(arr, k, 0, n - 1);
    return {first, last};
}

int count(vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    int result = sol.count(nums, nums.size(), target);

    cout << "The count of the target is: " << result << endl;

    return 0;
}
