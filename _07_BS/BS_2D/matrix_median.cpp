#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    pair<int, int> findMinMax(vector<vector<int>>&matrix, int n, int m){

        int mini = INT_MAX, maxi = INT_MAX;

        for(int i = 0; i <= n-1; i++){
            mini = min(mini, matrix[i][0]);
            maxi = max(maxi, matrix[i][m-1]);
        }
        return {mini, maxi};
    }

public:
    int upperBound(vector<int>&arr, int m, int value){
        int low = 0, high = m-1;
        int ans = m;

        while(low <= high){
            int mid = (low + high) / 2;

            if(arr[mid] > value){
                ans = mid;
                high = mid - 1;
            } 
            else low = mid + 1;
        }
        return ans;
    }

public:
    int countSmallEqual(vector<vector<int>>&matrix, int n, int m, int mid) {
        int count = 0;

        for(int i = 0; i < n; i++){
            count += upperBound(matrix[i], m, mid);
        }

        return count;
    }

public:
    int findMedian(vector<vector<int>>&matrix) {

        int n = matrix.size(), m = matrix[0].size();
        auto [low, high] = findMinMax(matrix, n, m);

        while(low <= high){
            int mid = (low + high) / 2;

            int smallEqual = countSmallEqual(matrix, n, m, mid);

            if(smallEqual <= (n*m)/2) low = mid + 1;
            else high = mid - 1;
        }

        return low;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout << "Median: " << obj.findMedian(matrix) << endl;
    return 0;
}