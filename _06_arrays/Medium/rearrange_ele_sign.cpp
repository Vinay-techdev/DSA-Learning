#include <bits/stdc++.h>
using namespace std;

//? Optimal Apporach
class Solution {
public:
    vector<int> RearrangeBySign(vector<int>& A, int n) {

        vector<int> ans(n, 0);

        int posIndex = 0, negIndex = 1;

        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                // Place negative numbers at odd indices
                ans[negIndex] = A[i];
                negIndex += 2;
            } else {
                // Place positive numbers at even indices
                ans[posIndex] = A[i];
                posIndex += 2;
            }
        }

        return ans;
    }
};

//? Brute Force Apporach
// class Solution {
// public:
//     vector<int> RearrangeBySign(vector<int>& A, int n) {
//         vector<int> pos; 
//         vector<int> neg; 

//         // Step 1: Separate positives and negatives
//         for (int i = 0; i < n; i++) {
//             if (A[i] > 0)
//                 pos.push_back(A[i]);
//             else
//                 neg.push_back(A[i]);
//         }

//         // Step 2: Place positives at even indices and negatives at odd indices
//         for (int i = 0; i < n / 2; i++) {
//             A[2 * i] = pos[i];    
//             A[2 * i + 1] = neg[i]; 
//         }

//         return A;
//     }
// };


int main() {
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    Solution obj;

    vector<int> ans = obj.RearrangeBySign(A, n);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
