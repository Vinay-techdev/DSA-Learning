#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;

        for(int i = 0; i < nums.size(); i++){
            xorr = xorr ^ nums[i];
        }

        return xorr;
    }
};

int main() {

    vector<int> nums = {4, 1, 2, 1, 2};

    Solution obj;

    int ans = obj.singleNumber(nums);

    cout << "Single Number: " << ans << endl;

    return 0;
}