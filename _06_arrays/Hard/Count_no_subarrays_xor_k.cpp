#include <bits/stdc++.h>
using namespace std;

//? Optimal solution
class Solution {
public:  
    int countSubarrays(vector<int>& A, int k) {
        
        unordered_map<int, int> freq;
        freq[0] = 1;

        int prefixXor = 0;
        int count = 0;

        for (int num : A) {
            
            prefixXor ^= num;
            int target = prefixXor ^ k;

            if (freq.find(target) != freq.end()) {
                count += freq[target];
            }

            freq[prefixXor]++;
        }
        return count;
    }
};

//? Brute force solution
class Solution {
public:
    int countSubarraysXOR(vector<int>& A, int B) {
    
        int count = 0;
       
        for (int i = 0; i < A.size(); i++) {
           
            int xorVal = 0;
           
            for (int j = i; j < A.size(); j++) {
                
                xorVal ^= A[j];
               
                if (xorVal == B) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    
    vector<int> A = {4, 2, 2, 6, 4};
    int B = 6;

    Solution sol;
    cout << sol.countSubarraysXOR(A, B) << endl;
    return 0;
}