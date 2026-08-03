#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findRotations(vector<int>& arr) {
        
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {

            int mid = low + (high - low) / 2;

            //? If mid element is greater than element at high,
            // smallest element lies to the right of mid
            if (arr[mid] > arr[high]) {
                high = mid - 1;
            } 
            //? Else smallest element is at mid or to the left
            else {
                low = mid + 1;
            }
        }

        return low+1;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4,5,6,7,0,1,2,3};

    int rotations = sol.findRotations(arr);

    cout << rotations << endl;
    return 0;
}
