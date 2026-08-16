#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> findMaxSum(vector<int>& weights, int n){

        int maxi = INT_MIN, sum = 0;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }

        return {maxi, sum};
    }

public:
    int findDays(vector<int>& weights, int capacity, int n){
        int days = 1, sum = 0;

        for(int i = 0; i < n; i++){
            if(sum + weights[i] > capacity){
                days++, sum = weights[i];
            } else sum += weights[i];
        }

        return days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        auto [low, high] = findMaxSum(weights, n);
        int ans = -1;

        while(low <= high){

            int mid = (low + high) / 2;

            int noOfDays = findDays(weights, mid, n);

            if(noOfDays <= days){
                ans = mid;
                high = mid -1;
            } else low = mid + 1;
        }

        return ans;
    }
};

int main() {
    vector<int> weights = {5,4,5,2,3,4,5,6};
    int d = 5;

    Solution sol;

    cout << sol.shipWithinDays(weights, d) << "\n";

    return 0;
}
