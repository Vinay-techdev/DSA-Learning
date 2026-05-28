#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element1 = 0, element2 = 0;
        int count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++){

            if(count1 == 0 && nums[i] != element2){
                count1 = 1;
                element1 = nums[i];
            }

            else if(count2 == 0 && nums[i] != element1){
                count2 = 1;
                element2 = nums[i];
            }

            else if(nums[i] == element1) count1++;
            else if(nums[i] == element2) count2++;

            else {
                count1--;
                count2--;
            }
        }

        int cnt1 = 0, cnt2 = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == element1) cnt1++;
            else if(nums[i] == element2) cnt2++;
        }

        vector<int> result;

        if(cnt1 > n / 3) result.push_back(element1);
        if(cnt2 > n / 3) result.push_back(element2);

        return result;
    }
};

int main() {

    vector<int> nums = {3, 2, 3};

    Solution obj;

    vector<int> ans = obj.majorityElement(nums);

    cout << "Majority Elements: ";

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}

//? Key Observation

// If an element appears more than: 3/n
// times, then there can be at most 2 such elements.

//? if n/4 then the logic changes slightly.

//For elements appearing more than: n/4​
// times, there can be at most: 4−1=3 majority elements.

//?   So:

//*     n/2 → max 1 element
//*     n/3 → max 2 elements
//*     n/4 → max 3 elements
//*     n/k → max k-1 elements