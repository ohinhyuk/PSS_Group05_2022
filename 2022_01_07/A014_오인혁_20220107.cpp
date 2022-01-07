#include <string>
class Solution {
    
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> answer;
        if(nums.size()==0){
            return answer;
        }
        
        int first=nums[0];
        
        for(int i = 0 ; i < nums.size() ; i ++){
            if( i==nums.size()-1 || nums[i] +1 != nums[i+1]){
                if(first == nums[i]) answer.push_back(to_string(first));
                else{ answer.push_back( to_string(first) + "->" + to_string(nums[i]) ); }
                if(i!=nums.size()-1) first = nums[i+1];
            }
        }
        
        
        return answer;
    }
};