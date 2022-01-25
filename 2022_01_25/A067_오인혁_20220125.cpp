class Solution {
public:
    string removeDuplicates(string s) {
        bool is = true;
        vector<char> v;
        
        for(int i = 0 ; i < s.size() ;++i){
            v.push_back(s[i]);
        }
        
        for(int i = 0 ; i <v.size()-1 ;++i){
            if(v.empty()) break;
            if(v[i]==v[i+1]){
                if(i==0){
                    v.erase(v.begin()+ (i+1));
                    v.erase(v.begin() + i);
                    i--;
                    continue;
                }
                v.erase(v.begin()+ (i+1));
                v.erase(v.begin() + i);
                i-=2;
                continue;
            }
        }
        string result;
        
        for(auto x : v){
            result += x;
        }
        return result;
    }
};