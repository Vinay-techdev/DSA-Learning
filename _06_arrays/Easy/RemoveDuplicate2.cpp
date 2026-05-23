#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums);

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i =2;

        if (n <= 2) return n;

        for(int j = 2; j<n; j++){
            if(nums[j]!=nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};

int main(){

    vector<int> nums;
    int n;
    cout << "Enter Number Elements" << endl;
    cin >> n;

    nums.resize(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    Solution obj;

    int result = obj.removeDuplicates(nums);

    cout << "New length: " << result << endl;

    cout << "Array after removal: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}