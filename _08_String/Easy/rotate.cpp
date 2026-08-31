#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()) return false;

        string appendString = s + s;

        return appendString.find(goal) < appendString.length();
    }
};

int main() {
    Solution solution;
    string s = "abcde";
    string goal = "cdeab";
    bool output = solution.rotateString(s, goal);
    cout << "Output: " << (output ? "true" : "false") << endl; // Expected Output: true
    return 0;
}