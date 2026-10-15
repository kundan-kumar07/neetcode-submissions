class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int price=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>price){
                int p=prices[i]-price;
                profit+=p;
                price=prices[i];

            }
            else if(prices[i]<price){
                price=prices[i];

            }
        }
        return profit;
    }
};