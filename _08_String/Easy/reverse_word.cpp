
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        int i = n-1;
        string ans = "";

        while(i>=0){

            while(i >= 0 && s[i] == ' '){
                i--;
            }
            if (i < 0) break;
            int end = i;

            while(i >= 0 && s[i] != ' '){
                i--;
            }

            if(!ans.empty())
                ans += " ";
            
            ans += s.substr(i+1, end-i);
        }

        return ans;
    }
};

int main() {
    Solution solution;
    string input = "  the sky is blue  ";
    string output = solution.reverseWords(input);
    cout << "Output: \"" << output << "\"" << endl; // Expected Output: "blue is sky the"
    return 0;
}