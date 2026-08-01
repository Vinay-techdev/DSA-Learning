//? Variant 2: To print the Nth row of the pascal triangle

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<long long> getNthRow(int N) {
        
        // Result vector to store the row
        vector<long long> row;
        
        // First value of the row is always 1
        long long val = 1;
        row.push_back(val);
        
        // Compute remaining values using the relation:
        // C(n, k) = C(n, k-1) * (n-k) / k
        for (int k = 1; k < N; k++) {
            val = val * (N - k) / k;
            row.push_back(val);
        }
        
        return row;
    }
};

int main() {
    int N = 5; // Example: 5th row
    Solution sol;
    vector<long long> result = sol.getNthRow(N);

    for (auto num : result) {
        cout << num << " ";
    }
    return 0;
}
