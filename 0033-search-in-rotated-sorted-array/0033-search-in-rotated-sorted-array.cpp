class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
        int index = binary_search(nums, low, high, target);
        return index;
    }
    
    int binary_search(vector<int> nums, int low, int high, int target){
        if(low > high){
            return -1;
        }

        int mid = (high + low) / 2;

        if(target == nums[mid]){
            return mid;
        }

        if(nums[low] <= nums[mid]){

            if(target >= nums[low] && target <= nums[mid]){
                return binary_search(nums, low, mid-1, target);   
            }

            return binary_search(nums, mid+1, high, target);
        }

        if(target >= nums[mid] && target <= nums[high]){
            return binary_search(nums, mid+1, high, target);
        }

        return binary_search(nums, low, mid-1, target);
    }
};