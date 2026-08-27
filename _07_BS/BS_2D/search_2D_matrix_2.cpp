#include <bits/stdc++.h>
using namespace std;

class Solution {

// The True Optimal Solution O(log(n * m))
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size(), m = matrix[0].size();

        int row = 0, col = m-1;

        while(row <= n-1 && col >= 0){
            if(matrix[row][col] == target){
                return true;
            } else if(matrix[row][col] < target) row++;
            else col--;
        }

        return false;
    }
};

// class Solution {

// // optimal 1
// public:
//     bool binarySearch(vector<int>& arr, int m, int target){
//         int low = 0, high = m -1;

//         while(low <= high){

//             int mid = (low + high) / 2;
//             if(arr[mid] == target)
//                 return true;
//             else if(arr[mid] < target) low = mid + 1;
//             else high = mid - 1;
//         }

//         return false;
//     }

// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int n = matrix.size(), m = matrix[0].size();

//         for(int i = 0; i < n; i++){
//             if(matrix[i][0] <= target && target <= matrix[i][m-1]){
                
//                 if(binarySearch(matrix[i], m, target))
//                     return true;
//             }
//         }

//         return false;
//     }
// };

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    

    Solution obj;

    if (obj.searchMatrix(matrix, 8))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}