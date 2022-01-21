#include <iostream>
#include <map>

using namespace std;

char most_number (string s){
    map<char , int> m;
    for(int i = 0 ; i < s.size() ; ++i){
        m[s[i]]++;
    }
    int max = 0 ;
    char result;
    bool multy = false;
    for(auto x : m){
        if(max < x.second ){
            max = x.second;
            result = x.first;
            multy = false;
        }
        else if(max == x.second){
            multy = true;
        }
    }

    if(multy ==true) return '?';

    return result;
}


int main(int args , char** argv){
    string s;
    cin >> s;

    for(int i = 0 ; i < s.size() ;++i){
        s[i] = toupper(s[i]);
    }

    cout << most_number(s);
}