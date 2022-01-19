class Solution {
public:
    bool checkRecord(string s) {
        vector<char> late;
        vector<char> absent;
        
        for(int i = 0 ; i < s.size() ; ++i){
            if(s[i]=='A'){
                absent.push_back(s[i]);
                late.erase(late.begin() , late.end());
                if(absent.size()==2) return false;   
            }
            else if(s[i]=='L'){
                late.push_back(s[i]);
                if(late.size()==3) return false;
            }
            else{
                late.erase(late.begin() , late.end());
            }
        }
        
        return true;
    }
};