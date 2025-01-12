/*
The below code example finds and returns the maximum profit by buying the stock at lowest price and selling it at highest price later, if no such profit can be achieved then it returns 0. The maxProfit function takes two arguments, one is an integer array, and another is an integer, it finds and returns the maximum profit possible otherwise, it returns 0.
Example:
 Input: prices{} = [7, 1, 4, 3, 6], n = 5
 Output: 5
 Explanation: Buy on day 2 (at price 1) and sell it on day 5 (at price 6), maximum profit = 6-1 = 5.
 Input: prices{} = [7, 6, 4, 3, 1], n = 5
 Output: 0
 Explanation: In this case, no transactions are done, maximum profit = 0.
*/

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
 int minPrice=prices[0], maxProfit=0;
 for(int i=1; i<n; i++) {
  minPrice = min(minPrice, prices[i]);
  maxProfit = max(maxProfit, prices[i]-minPrice);
 }
 return maxProfit;
}

int main() {
 int n = 5;
 int prices[] = {7, 1, 5, 3, 6, 4};
 cout << maxProfit(prices, n);
 return 0;
}
