#include <algorithm>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int mid =0;
        if(find(nums.begin() , nums.end() , target) == nums.end()){
            return -1;
        }
        while(target!=nums[mid]){
            mid = int(low + high)/2;
            if(target > nums[mid]){
                low = mid + 1 ;
            }
            else if(target < nums[mid]){
                high = mid -1;
            }
        }
        return mid;
};
};