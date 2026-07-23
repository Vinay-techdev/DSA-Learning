//? Rotate Image by 90 degree

#include <bits/stdc++.h>
using namespace std;

//? Optimal Apporach

class Solution {
public:
    void rotateClockwise(vector<vector<int>>& matrix) {
        int n = matrix.size();

        //step 1: Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // Swap element at (i, j) with (j, i) to transpose
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //step 2: Reverse each row
        for (int i = 0; i < n; ++i) {
            // Reverse the current row to complete clockwise rotation
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

//? Brute force apporach
// class Solution {
// public:
//     vector<vector<int>> rotateClockwise(vector<vector<int>>& matrix) {
    
//         int n = matrix.size();

//         vector<vector<int>> rotated(n, vector<int>(n));

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 // Place the element at its new rotated position
//                 rotated[j][n - i - 1] = matrix[i][j];
//             }
//         }

//         return rotated;
//     }
// };

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;
    obj.rotateClockwise(mat);
    // vector<vector<int>> rotated = obj.rotateClockwise(mat);

    // for (auto row : rotated) {
    //     for (int val : row) cout << val << " ";
    //     cout << endl;
    // }

    return 0;
}
