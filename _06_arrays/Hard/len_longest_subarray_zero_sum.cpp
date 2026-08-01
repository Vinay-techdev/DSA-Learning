#include <bits/stdc++.h>
using namespace std;

//? Optimal solution
int maxLen(int A[], int n) {
  
  unordered_map<int, int> mpp;
  int maxi = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += A[i];

    if (sum == 0) {
      maxi = i + 1;
    }

    else {
     
      if (mpp.find(sum) != mpp.end()) {
        maxi = max(maxi, i - mpp[sum]);
      }
      
      else {
        mpp[sum] = i;
      }
    }
  }

  return maxi;
}

//? Brute force solution
int solve(vector<int>& a) {
   
    int maxLen = 0;
    unordered_map<int, int> sumIndexMap;
    int sum = 0;

    
    for (int i = 0; i < (int)a.size(); i++) {
        
        sum += a[i];

        if (sum == 0) {
            maxLen = i + 1;
        }
       
        else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        }

        else {
            sumIndexMap[sum] = i;
        }
    }

    return maxLen;
}



int main() {
  
  int A[] = {9, -3, 3, -1, 6, -5};
  int n = sizeof(A) / sizeof(A[0]);
  
  cout << maxLen(A, n) << endl;

  return 0;
}
