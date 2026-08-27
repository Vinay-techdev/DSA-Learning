#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size(), m = matrix[0].size();

        int low = 0, high = n*m-1;

        while(low <= high){

            int mid = (low + high) / 2;

            int row = mid / m, col = mid % m;

            if(matrix[row][col] == target)
                return true;

            else if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;

        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    Solution obj;

    if (obj.searchMatrix(matrix, 8))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}