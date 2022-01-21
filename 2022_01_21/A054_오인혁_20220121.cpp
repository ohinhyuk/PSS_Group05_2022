class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char> v;
        string result;
        int num = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            
            if(v.empty()){
                if(s[i]=='(')
                    v.push_back(s[i]);
            }
            
            else if(!v.empty()){
                if(s[i]=='('){
                    num++;
                    v.push_back(s[i]);
                }
                else if(s[i]==')' && v.size()!= 1){
                    num--;
                    v.push_back(s[i]);
                    
                    if(num==0){
                        
                        for(int i = 1 ; i < v.size() ; ++i){
                           result += v[i];
                        }
                        while(v.size() > 1){
                            v.pop_back();
                        }
                    }
                    
                }
                else if(s[i]==')' && v.size()==1){
                    
                    v.pop_back();
                }
            }
            
        }
        return result;
    }
};