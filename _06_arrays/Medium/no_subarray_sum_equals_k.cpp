#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        map<int,int> mpp;
        mpp[0] = 1;
        
        int n = nums.size();
        int prefixSum = 0;
        int count = 0;

        for(int i = 0; i < n; i++) {

            prefixSum += nums[i];

            int minus = prefixSum - k;

            count += mpp[minus];

            mpp[prefixSum]++;
        }

        return count;
    }
};


int main() {

    vector<int> nums = {1, 2, 3};
    int k = 3;

    Solution obj;

    int result = obj.subarraySum(nums, k);

    cout << "Number of subarrays: " << result << endl;

    return 0;
}