#include <algorithm>

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int great_find;
        bool is = true;
        vector<int> v;
        for(int i = 0 ; i < nums1.size() ; ++i){
            great_find = (find(nums2.begin() , nums2.end() , nums1[i]) - nums2.begin());
            for(int j = great_find + 1 ; j < nums2.size() ; j++){
                if(nums1[i] < nums2[j]){
                   v.push_back(nums2[j]);
                    is = false;
                    break;
                }
            }
            if(is == true){
                v.push_back(-1);
            }
            is = true;
        }
        
    return v;
    }
};