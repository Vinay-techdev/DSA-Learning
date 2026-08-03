#include <bits/stdc++.h>
using namespace std;

//? optimal solution 1
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =  nums.size();

        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int high = n - 2;
        int low = 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;
            
            if(nums[mid] > nums[mid+1])
                high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};


//? optimal solution 2
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
        int low = 0, high = nums.size() - 1;

        while (low < high) {

            int mid = (low + high) / 2;

            // If mid element is greater than next
            if (nums[mid] > nums[mid + 1]) {
                // Move to left half
                high = mid;
            } else {
                // Move to right half
                low = mid + 1;
            }
        }

        // Return peak index
        return low;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    Solution obj;
    cout << obj.findPeakElement(nums) << endl;

    return 0;
}
