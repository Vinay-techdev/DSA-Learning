#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max1 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                max1 = max(max1, count);
            }else{
                count = 0;
            }
        }

        return max1;
    }
};

int main() {

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;

    int ans = obj.findMaxConsecutiveOnes(nums);

    cout << "Maximum Consecutive Ones: " << ans << endl;

    return 0;
}