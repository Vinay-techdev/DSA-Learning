#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        if (x < 2) return x;
        int left = 1, right = x, ans = 0;

        while (left <= right) {
            long long mid =(left + right) / 2;

            //? Check if mid*mid is less than or equal to x
            if (mid * mid <= x) {
                // Store mid as potential answer
                ans = mid;
                // Move to right half
                left = mid + 1;
            } 
            else {
                // Move to left half
                right = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    cout << s.mySqrt(8) << endl;
    return 0;
}
