#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int count = 0;
        string ans = "";

        for(int i = 0; i < n-1; i++){
            if(s[i] == '('){
                if(count != 0){
                    ans += s[i];
                }

                count++;
            }
            else if(s[i] == ')'){
                count--;
                if(count != 0){
                    ans += s[i];
                }
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;
    string input = "(()())(())";
    string output = solution.removeOuterParentheses(input);
    cout << "Output: " << output << endl; // Expected Output: "()()()"
    return 0;
}