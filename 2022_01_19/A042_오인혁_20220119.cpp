#include <vector>
class Solution {
public:
    
    vector<char> result_string(string s){
        vector<char> v;
        
        for(int i = 0 ; i < s.size() ;++i){
            if(s[i]=='#'){
                if(!v.empty()){
                    v.pop_back();
                }
            }
            else{
                v.push_back(s[i]);
            }
        }
        return v;
    }
    
    bool compare_two_vector(vector<char> v1, vector<char> v2){
        if(v1.size() != v2.size()) return false;
        else{
            for(int i = 0 ; i < v1.size() ; ++i){
                if(v1[i] != v2[i]) return false;
            }
        }
        return true;
    }
    
    bool backspaceCompare(string s, string t) {
        vector<char>v1;
        vector<char>v2;
        
        v1 = result_string(s);
        v2 = result_string(t);
        
        return compare_two_vector(v1,v2);
    }
};