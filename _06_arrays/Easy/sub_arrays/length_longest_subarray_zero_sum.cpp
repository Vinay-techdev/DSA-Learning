#include <bits/stdc++.h>
using namespace std;

//? Optimal Approach
int maxLen(int A[], int n) {

  // map prefix sum -> first index seen
  unordered_map<int, int> mpp;

  int maxi = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {

    sum += A[i];

    // if sum is zero, subarray [0..i] has zero sum
    if (sum == 0) {
      // update best length
      maxi = i + 1;
    }

    // otherwise check if this sum was seen before
    else {
      // when seen, zero-sum segment between previous index + 1 and i
      if (mpp.find(sum) != mpp.end()) {
        // maximize length
        maxi = max(maxi, i - mpp[sum]);
      }
      // first time seeing this sum
      else {
        mpp[sum] = i;
      }
    }
  }

  return maxi;
}

int main() {
  int A[] = {9, -3, 3, -1, 6, -5};
  int n = sizeof(A) / sizeof(A[0]);
 
  cout << maxLen(A, n) << endl;

  return 0;
}


//? Brute froce
// int solve(vector<int>& a) {

//     int maxLen = 0;
//     // map prefix sum -> first index seen
//     unordered_map<int, int> sumIndexMap;
//     int sum = 0;

//     for (int i = 0; i < (int)a.size(); i++) {
//         sum += a[i];

//         // if sum is zero, subarray [0..i] has zero sum
//         if (sum == 0) {
//             maxLen = i + 1;
//         }
//         // if this sum seen before, subarray (prevIndex..i] has zero sum
//         else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
//             // maximize length using previous index
//             maxLen = max(maxLen, i - sumIndexMap[sum]);
//         }
//         else {
//             sumIndexMap[sum] = i;
//         }
//     }
//     return maxLen;
// }

// int main() {

//     vector<int> a = {9, -3, 3, -1, 6, -5};

//     cout << solve(a) << endl;

//     return 0;
// }
