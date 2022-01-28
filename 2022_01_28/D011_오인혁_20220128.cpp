#include <map>

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0) m[nums[i]]++;
        }
        int i = 1;
        for(auto x : m){
            if(i!= x.first) return i;
            i++;
        }
    return i;
    }
};