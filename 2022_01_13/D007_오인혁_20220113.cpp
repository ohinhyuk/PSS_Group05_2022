#include <algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        nums1.insert(nums1.end() , nums2.begin() , nums2.end());
        sort(nums1.begin(),nums1.end());
        
        double result = 0;
        double temp = 0;
        int m = nums1.size();
        if(m%2 == 1){
            m = m/2;
            result = nums1[m];
        }
        else{
            m = m/2 - 1;
            result +=nums1[m];
            result +=nums1[m+1];
            result /= 2;
        }
        
        return result;
        
        
        } 
};