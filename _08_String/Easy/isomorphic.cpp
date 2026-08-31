#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size()) return false;

        int posS[256] = {0}, posT[256] = {0};

        for(int i = 0; i < s.size(); i++){

            if(posS[(unsigned char)s[i]] != posT[(unsigned char)t[i]]) return false;

            posS[(unsigned char)s[i]] = i + 1;
            posT[(unsigned char)t[i]] = i + 1;
        } 
        return true;
    }
};

int main() {
    Solution solution;
    string s = "egg";
    string t = "add";
    bool output = solution.isIsomorphic(s, t);
    cout << "Output: " << (output ? "true" : "false") << endl; // Expected Output: true
    return 0;
}