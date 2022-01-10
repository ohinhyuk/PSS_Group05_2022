#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

int room_num(string s){
    map<char, int> room_number;

    for(int i = 0; i < s.size() ; ++i){
        room_number[s[i]]++;
    }
    
    int max = 0;
    int six_and_nine = 0;
    for(auto x : room_number){
        if(x.first=='6' || x.first=='9'){
            six_and_nine += x.second;
        }
    }
    if(six_and_nine % 2 == 0){
        six_and_nine = six_and_nine / 2;
    }
    else{
        six_and_nine = (six_and_nine / 2) +1;
    }
    for(auto x : room_number){
        if(x.first=='6' || x.first=='9'){
        x.second = six_and_nine;
        }
        if(x.second > max){
            max = x.second;
        }
    }

    return max;
}

int main(int args, char** argv){
    string s;

    cin >> s;
    
    cout << room_num(s) ;

}