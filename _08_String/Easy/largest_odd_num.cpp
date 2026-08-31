
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {

        int i =  num.size() -1;

        while(i>=0){
            if((num[i] - '0') % 2 == 1){
                break;
            }
            i--;
        }

        return num.substr(0, i+1);
    }
};

int main() {
    Solution solution;
    string input = "123456";
    string output = solution.largestOddNumber(input);
    cout << "Output: " << output << endl; // Expected Output: "12345"
    return 0;
}