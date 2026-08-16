#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //? Function to find the minimum and maximum values in the bloomDay vector
    pair<int, int> findMinMax(vector<int>& bloomDay){
        int n = bloomDay.size();
        int mini = INT_MAX, maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }

        return {mini, maxi};
    }

public:
    //? Function to find the number of bouquets that can be made by a given day
    int findNoBouquets(vector<int>& bloomDay, int day, int k){

        int count = 0, n = bloomDay.size();
        int totalBloom = 0;

        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= day){
                count++;
            }
            else {
                totalBloom += (count/k);
                count = 0;
            }
        }

        totalBloom += (count/k);
        return totalBloom;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        // Base case: If required flowers exceed total flowers available
        if (m * k > bloomDay.size()) {
            return -1;
        }

        auto [low, high] = findMinMax(bloomDay); 
        int ans = -1;

        while(low <= high){

            int mid = (low + high) / 2;
            int bouquets = findNoBouquets(bloomDay, mid, k);

            if(bouquets >= m){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;

    Solution obj;
    cout << obj.minDays(bloomDay, m, k);
    return 0;
}