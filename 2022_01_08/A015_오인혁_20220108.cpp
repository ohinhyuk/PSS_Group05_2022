#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int gumzeung_num(vector<int> & v){
    int result = 0;

    for(auto x : v){
        result += pow(x,2);
    }

    result %= 10;

    return result;
}

int main(int args, char** argv){
    
    vector<int> v;
    int push_num;
    for(int i = 0 ; i < 5 ; ++i){
        cin >> push_num;
        v.push_back(push_num);
    }

    cout << gumzeung_num(v);
}