class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lbv = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lbv){
                lbv = prices[i];
            }
            
            pist = prices[i] - lbv;
            
            if(pist > op){
                op = pist;
            }
        }
        return op;
    }
};