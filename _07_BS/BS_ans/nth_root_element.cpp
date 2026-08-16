#include <bits/stdc++.h>
using namespace std;
        
class Solution {
public:
    int nthRoot(int n, int m) {

        int low = 1, high = m;

        while (low <= high) {

            int mid = (low + high) / 2;

            // Store result of mid^n
            long long ans = 1;
            for (int i = 0; i < n; i++) {
                ans *= mid;
                if (ans > m) break;
            }

            // If mid^n equals m
            if (ans == m) return mid;

            // If mid^n is less than m
            if (ans < m) low = mid + 1;

            // If mid^n is more than m
            else high = mid - 1;
        }

        return -1;
    }
};

int main() {
    Solution obj;
    int result = obj.nthRoot(3, 27);
    return 0;
}
