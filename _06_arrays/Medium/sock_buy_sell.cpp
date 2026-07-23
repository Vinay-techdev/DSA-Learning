//* Stock Buy And Sell - Best Time to Buy and Sell Sotck

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int stockbuySell(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {

            // If current price is less than minPrice, update minPrice
            if (price < minPrice) {
                minPrice = price;
            }
            // Else calculate profit and update maxProfit if it's greater
            else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }

        return maxProfit;
    }
};


//? Brute Froce Apporach
// class Solution {
// public:
//     int stockbuySell(vector<int>& prices) {
        
//         int maxProfit = 0;

//         for(int i = 0; i < prices.size(); i++) {
            
//             for(int j = i + 1; j < prices.size(); j++) {
               
//                 int profit = prices[j] - prices[i];
//                 maxProfit = max(maxProfit, profit);
//             }
//         }

//         return maxProfit;
//     }
// };

int main() {

    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Max Profit: " << sol.stockbuySell(prices) << endl;

    return 0;
}