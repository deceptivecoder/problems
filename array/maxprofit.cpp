
/*
    Given array prices, return max profit w/ 1 buy & 1 sell
    Ex. prices = [7,1,5,3,6,4] -> 5 (buy at $1, sell at $6)

    For each, get diff b/w that & min value before, store max

    Time: O(n)
    Space: O(1)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:cd 
    int maxProfit(vector<int>& prices) {
        int maxp = 0; 
        int l = 0; 
        int r = 0;
        while(r < prices.size()){
            if(prices[r] > prices[l])
                maxp = max(maxp, prices[r]-prices[l]);
            else
                l = r;
            r++;
        }
        return maxp;
    }
};

int main(){
    Solution ob;
    vector<int> prices = {7,1,5,3,6,4};
    cout<<ob.maxProfit(prices)<<endl;
    return 0;
}