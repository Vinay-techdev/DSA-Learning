#include <bits/stdc++.h>
using namespace std;

class Solution {

//? Optimal Alternative: Vertical Scanning O(N * M)
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()){
            return "";
        }
        
        for(int i = 0; i < strs[0].size(); i++){

            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++){

                if(i == strs[j].size() || c != strs[j][i]){
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0];
       
    }
};


//? Sorting Approach with TC - O(N * M log N)

// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         sort(strs.begin(), strs.end());
//         string ans = "";

//         string first = strs.front();
//         string last = strs.back();

//         int n = min(first.size(), last.size());

//         for(int i = 0; i < n; i++){
//             if(first[i] != last[i]){     
//                break;
//             }

//             ans += first[i];
//         }
//         return ans;
//     }
// };

int main() {
    Solution solution;
    vector<string> input = {"flower", "flow", "flight"};
    string output = solution.longestCommonPrefix(input);
    cout << "Output: " << output << endl; // Expected Output: "fl"
    return 0;
}