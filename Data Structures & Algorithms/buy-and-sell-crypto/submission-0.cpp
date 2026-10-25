class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=price){
                price=prices[i];
            }
            else{
                int profit=prices[i]-price;
                maxProfit=max(profit,maxProfit);
            }
        }
        return maxProfit;
        
    }
};
