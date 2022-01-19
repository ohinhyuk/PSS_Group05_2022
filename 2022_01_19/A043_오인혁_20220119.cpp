#include <algorithm>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> v;
        if(find(strs.begin() , strs.end() , "") != strs.end()){
            return "";
        }
        string temp = strs[0];
        for(int i = 0 ; i < temp.size() ; ++i){
            v.push_back(temp[i]);
        }
        for(int i = 1 ; i < strs.size() ; ++i){
            temp = strs[i];
            for(int j = 0 ; j < temp.size() ; ++j){
                if(temp[j] != v[j] ){
                    v.erase(v.begin() + j , v.end());
                    
                    break;
                }
                else if(v.size() > temp.size() && j==temp.size()-1){
                    v.erase(v.begin() + temp.size() , v.end());
                }
                else if(v.size() < temp.size() && j==v.size()-1){
                    break;
                }
            }
            if(v.empty()) return "";
        }
        temp = "";
        for(int i = 0 ; i < v.size() ; i++){
            temp += v[i];
        }
        
        return temp;
    }
};