//Brute force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0;
        for(int i=0; i<n; i++) {
            for(int j=0;j<nj++){
                if(prices[j]>prices[i])
                    profit = max(prices[j]-prices[i],profit);
            }
        }
        return profit;
    }
    
};

//Optimized
class Solution {
    public:
    int maxProfit(vector<int>&prices){
        int profit = 0, temp =INT_MAX;
        for(int i=0;i<n;i++){
            temp = min(temp,prices[i]);
            profit=max(profit,prices[i]-temp);
        }
        return profit;
    }

};