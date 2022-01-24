#include <string>

class Solution {
public:
    
    string add_same_size(string a, string b){
        bool carry = false;
        string s;
        for(int i = a.size()-1 ; i >= 0 ; --i){
            if(a[i]=='1' && b[i]=='1' && carry == true){
                s.insert(0,"1");
            }
            
            else if(a[i]=='1' && b[i]=='1' && carry == false){
                s.insert(0,"0");
                
                carry = true;
                
            }
            else if(a[i]=='0' && b[i]=='0' && carry == false){
                s.insert(0,"0");
            }
            else if(a[i] == '0' && b[i] == '0' && carry ==true){
                s.insert(0,"1");
                carry = false;
            }
            else if(a[i]=='0' && b[i]=='1' && carry == false){
                s.insert(0,"1");
            }
            else if(a[i]=='0' && b[i]=='1' && carry == true){
                s.insert(0,"0");
                
            }
            else if(a[i]=='1' && b[i]=='0' && carry == false){
                s.insert(0,"1");
            }
            else if(a[i]=='1' && b[i]=='0' && carry == true){
                s.insert(0,"0");
            }
            
            if(i ==0 && carry == true){
                s.insert(0,"1");
            }
            
        }
        return s;
    }
    
    string addBinary(string a, string b) {
        bool carry = false;
        
        int a_size = a.size();
        int b_size = b.size();
        
        if(a.size() > b.size()){
            for(int i = 0 ; i < a_size-b_size ; ++i){
                b.insert(0,"0");
            }
            
            return add_same_size(a,b);
        }
        
        
        else if(b.size() > a.size()) {
            for(int i = 0 ; i < b_size-a_size ; ++i){
                a.insert(0,"0");
            }
            return add_same_size(a,b);
        }
        
        else if(a_size == b_size){
            return add_same_size(a,b);   
        }
        string s;
        return s;
    }
};