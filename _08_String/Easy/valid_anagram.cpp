#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;

        int freq[26] = {0};

        for(int i = 0; i <= s.size() - 1; i++){
            freq[s[i] - 'a']++;
        }

        for(int i = 0; i <= t.size() - 1; i++){
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] != 0) return false;
        }

        return true;

    }
};

int main() {
    Solution solution;
    string s = "anagram";
    string t = "nagaram";
    bool output = solution.isAnagram(s, t);
    cout << "Output: " << (output ? "true" : "false") << endl; // Expected Output: true
    return 0;
}