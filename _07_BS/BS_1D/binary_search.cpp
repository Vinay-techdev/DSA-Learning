#include <bits/stdc++.h>
using namespace std;

//? Iterative approach
class Solution1 {
public:
    int binarySearch1(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2; 
            if (nums[mid] == target) return mid;    
            else if (target > nums[mid]) low = mid + 1;
            else high = mid - 1;                        
        }
        return -1;
    }
};

//? Recursive approach
class Solution2 {
public:
    int binarySearch2(vector<int>& nums, int low, int high, int target) {
        if (low > high) return -1;
        int mid = (low + high) / 2;

        if (nums[mid] == target) return mid;
    
        else if (target > nums[mid])
            return binarySearch2(nums, mid + 1, high, target);

        return binarySearch2(nums, low, mid - 1, target);
    }
};

int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 6; 

    Solution1 obj1; 
    int ind = obj1.binarySearch1(a, target);


    Solution2 obj2; 
    int ind = obj2.binarySearch2(a, 0, a.size() - 1, target);

    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ind << endl;

    return 0;
}

