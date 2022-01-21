#include <iostream>
#include <vector>

using namespace std;

bool a_e_i_o_u(string s){
    bool check = false;
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i]=='a' || s[i] =='e' || s[i]=='i' || s[i]=='o' || s[i] =='u') check = true; 
    }
    return check;
}

bool threetimes(string s){
    bool check = true;
    vector<char> jaum;
    vector<char> moum;
    
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i]=='a' || s[i] =='e' || s[i]=='i' || s[i]=='o' || s[i] =='u'){
            moum.push_back(s[i]);
            if(!jaum.empty()){
                jaum.erase(jaum.begin() , jaum.end());
            }
        }
        else{
            jaum.push_back(s[i]);
            if(!moum.empty()){
               moum.erase(moum.begin(), moum.end());
            }
        }
        if(jaum.size()==3 || moum.size()==3){
            return false;
        }
        if(jaum.size()==2){
            if(jaum[0]==jaum[1]) return false;
        }
        if(moum.size()==2){
            if((moum[0]=='e' && moum[1]=='e') || (moum[0]=='o' &&moum[1]=='o')){
                continue;
            }
            else if(moum[0]==moum[1])
                return false;
        }
    }
    return true;
}

int main(int args , char** argv){
    string s;
    cin >> s;
    while(s!="end"){
        if(a_e_i_o_u(s) && threetimes(s)) cout << "<" << s <<"> is acceptable." << "\n";
        else{
            cout << "<" << s <<"> is not acceptable." << "\n";
        }
        cin >> s;
    }
}