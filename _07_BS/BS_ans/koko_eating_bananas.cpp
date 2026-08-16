#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //? Function to find the maximum value in the piles
    int findMax(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();

        for(int i = 0; i < n; i++)
            maxi = max(maxi, piles[i]);
        
        return maxi;
    }

public:
    //? Function to calculate total hours needed to eat all bananas at speed m
    int totalHours(vector<int>& piles, int m){
        int total = 0;
        int n = piles.size();

        for(int i = 0; i < n; i++){
            total += ceil((double)piles[i] / (double)m);  
        }

        return total;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1, high = findMax(piles);
        int ans = -1;

        while(low <= high){

            int mid = (low + high) / 2;
            int total = totalHours(piles, mid);

            //? If total hours is less than or equal to h 
            if(total <= h){

                // store mid as potential answer
                ans = mid;
                // move to left half
                high = mid - 1;
            }
            //? If total hours is more than h, move to right half
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    Solution obj;
    cout << obj.minEatingSpeed(piles, h);
    return 0;
}
