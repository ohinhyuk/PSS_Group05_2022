#include <iostream>

using namespace std;

int main(int args, char ** argv){
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
            cout << char(int(s[i])+23);
        }
        else{
            cout << char(int(s[i]) - 3);
        }
    }
}