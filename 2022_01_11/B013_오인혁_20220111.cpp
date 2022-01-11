#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> water_amount(int a , int b, int c){

    vector<int> v;

    if(c <= a && c <= b ){
        v.push_back(0);
        v.push_back(c);
        if(c < b && c == a){
            v.push_back(b-c);
        }
    }
    else if(c >= a && c >= b){
        if(c < a+b){
            v.push_back(b);
            v.push_back(a);
        }
        v.push_back(c);
        if(a <= b){
        v.push_back(c-a);
        }
        v.push_back(c-b);

    }
    else if(c > a && c < b){
        v.push_back(0);
        v.push_back(c);
        v.push_back(c-a);
        v.push_back(a);
    }
    else if(c > b && c < a){
        v.push_back(c);
        v.push_back(c-b);
        v.push_back(b);
    }
        sort(v.begin(),v.end());
        
        for(int i = 0 ; i < v.size()-1; i++){
            if(v[i] == v[i+1]) v.erase(v.begin()+i);
        }
    

    



    return v;
}

int main(int args, char** argv){

    int A, B, C ;

    cin >> A;
    cin >> B;
    cin >> C;
    
    vector<int> v;
    v = water_amount(A,B,C);

    for(auto x : v){
        cout << x << ' ';
    }
}