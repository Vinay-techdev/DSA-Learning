//? Variant 3: To generate the entire Pascal’s Triangle for the first N rows

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);
        for(int i = 1; i < row; i++){
            ans = ans*(row-i);
            ans = ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRow(i));
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int n = 5;

    vector<vector<int>> result = obj.generate(n);
    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
}
