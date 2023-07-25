class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        if(nums.empty()){
            return 0;
        }
        
        int minProduct = 1, maxProduct = 1, best = INT_MIN;
        
        for(auto n : nums){
            if(n < 0){
                swap(minProduct, maxProduct);
            }
            
            maxProduct = max(maxProduct*n, n);
            minProduct = min(minProduct*n, n);
            best = max(maxProduct, best);
        }
        
        return best;
    }
};