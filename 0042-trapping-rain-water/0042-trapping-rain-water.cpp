class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2){
            return 0;
        }
        
        int n = height.size();
        int maxLeft = height[0], maxRight = height[n-1];
        int left = 1 , right = n-2;
        int ans = 0;
        
        while(left <= right){
            if(maxLeft <= maxRight){
                if(height[left] > maxLeft){
                    maxLeft = height[left];
                }
                else{
                    ans += maxLeft - height[left];
                }
                left++;
            }
            else{
                if(height[right] > maxRight){
                    maxRight = height[right];
                }
                else{
                    ans += maxRight - height[right];
                }
                right--;
            }
        }
        return ans;
    }
};