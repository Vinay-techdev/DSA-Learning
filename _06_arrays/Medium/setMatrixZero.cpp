#include <bits/stdc++.h>
using namespace std;

//? Optimal Apporach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int col0 = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;

                    if(j != 0){
                        matrix[0][j] = 0;
                    } else col0 = 0;
                }
            }
        }

        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][j] != 0){

                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }

        if(col0 == 0){
            for(int i = 0; i < m; i++){
                matrix[i][0]=0;
            }
        }
    }
};

//? Better Apporach
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
    
//         int m = matrix.size();
//         int n = matrix[0].size();

//         // row marker array
//         vector<int> row(m, 0);
//         // column marker array
//         vector<int> col(n, 0);

//         // mark rows and columns that need to be zeroed
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
                
//                 // If element is zero, mark its row and column
//                 if (matrix[i][j] == 0) {
//                     row[i] = 1;
//                     col[j] = 1;
//                 }
//             }
//         }

//         // set cells to zero based on markers
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If the row or column is marked, set cell to zero
//                 if (row[i] == 1 || col[j] == 1) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };


//? Brute Force Apporach
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
        
//         // number of rows
//         int m = matrix.size();
//         // number of columns
//         int n = matrix[0].size();

//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 // If current cell is zero
//                 if (matrix[i][j] == 0) {
//                     // Mark all elements in this row as -1 (except existing zeros)
//                     for (int col = 0; col < n; col++) {
//                         if (matrix[i][col] != 0)
//                             matrix[i][col] = -1;
//                     }
//                     // Mark all elements in this column as -1 (except existing zeros)
//                     for (int row = 0; row < m; row++) {
//                         if (matrix[row][j] != 0)
//                             matrix[row][j] = -1;
//                     }
//                 }
//             }
//         }

//         // replace all -1 markers with 0
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] == -1)
//                     matrix[i][j] = 0;
//             }
//         }
//     }
// };

int main() {
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    Solution sol;
    sol.setZeroes(matrix);
    
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
