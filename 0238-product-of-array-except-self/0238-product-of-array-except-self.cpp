class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int flag = count(nums.begin(), nums.end(), 0);
        
        if(flag > 1){
            return vector<int> (size(nums));
        }
        
        int result = 1;
        
        for(auto c : nums){
            if(c){
                result *= c;
            }
        }
        
        for(auto& c : nums){
            if(flag){
                c = c ? 0 : result;
            }
            else{
                c = result / c;
            }
        }
        return nums;
    }
};