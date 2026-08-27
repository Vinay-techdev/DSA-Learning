#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxElementCol(vector<vector<int>>& mat, int mid, int n){
        int maxi = INT_MIN;
        int index = -1;

        for(int i = 0; i <= n-1; i++){
            if(mat[i][mid] > maxi){
                maxi = mat[i][mid];
                index = i;
            }
        }

        return index;
    }
    
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int low = 0, high = m-1;

        while(low <= high){

            int mid = (low + high) / 2;
            int maxElInd = maxElementCol(mat, mid, n);

            int left = mid - 1 >= 0 ? mat[maxElInd][mid-1] : -1;
            int right = mid + 1 < m ? mat[maxElInd][mid+1] : -1;

            if(mat[maxElInd][mid] > left && mat[maxElInd][mid] > right){
                return {maxElInd, mid};
            }
            else if(mat[maxElInd][mid] < left) high = mid -1;
            else low = mid + 1;
        }

        return {-1, -1};

    }
};

int main() {
      vector<vector<int>> mat = {
          {4, 2, 5, 1, 4, 5},
          {2, 9, 3, 2, 3, 2},
          {1, 7, 6, 0, 1, 3},
          {3, 6, 2, 3, 7, 2}
      };
  
      Solution sol;
  
      vector<int> peak = sol.findPeakGrid(mat);
      cout << "The row of peak element is " << peak[0]
           << " and column of the peak element is " << peak[1] << endl;
  
      return 0;
  }