/* BRUTE FORCE 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int n = prices.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int curr_profit = prices[j] - prices[i];
                max_profit = max(max_profit, curr_profit);

            }
        }
        return max_profit;
    }
};
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Store the minimum price seen so far
        int min_price = prices[0];

        // Store the maximum profit
        int max_profit = 0;

        // Traverse prices from second day
        for(int i = 1; i < prices.size(); i++) {

            // Update minimum price till current day
            min_price = min(min_price, prices[i]);

            // Profit if sold on current day
            int curr_profit = prices[i] - min_price;

            // Update maximum profit
            max_profit = max(max_profit, curr_profit);
        }

        // RETURN STATEMENT (missing earlier)
        return max_profit;
    }
};

int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};

    cout << s.maxProfit(prices);
    return 0;
}
