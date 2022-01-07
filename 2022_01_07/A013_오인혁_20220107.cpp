#include <map>

// map을 사용하여 구하는 것이 가장 빠르다.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> num;
        
            for(int i = 0 ;i < nums.size() ; i++){
                num[nums[i]]++;
            }

            for(auto x : num){
                if(x.second == 1)
                    return x.first;
            }
            return -1;
        }
};