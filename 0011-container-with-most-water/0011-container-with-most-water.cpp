class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2){
            return -1;
        }
        int maxarea = 0;
        int low = 0, high = height.size()-1;
        
        while(low < high){
            int area = min(height[low], height[high]) * (high - low);
            maxarea = max(maxarea, area);
            if(height[low] < height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        
        return maxarea;
    }
};