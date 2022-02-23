#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

bool comp(pair<char,int> a , pair<char,int> b){
    return a.second > b.second;
}

int main(int args ,char ** argv){
    // vector<string> v(10,"");
    // int N;
    // cin >> N;
    // string s;

    // map<char , char> m;
    // map<char , char> :: iterator iter;

    // for(int i = 0 ; i < N ; ++i){
    //     cin >> s;
    //     for(int j = 0 ; j < s.size() ; ++j){
    //         v[j] += s[s.size() -1 - j]; 
    //     }
    // }

    // reverse(v.begin() , v.end());

    // char nine_to_one = '9';
    // for(int i = 0 ; i < v.size() ; ++i){
    //     for(int j = 0 ; j < v[i].size(); ++j){
    //         iter = m.find(v[i][j]);
    //         if(iter==m.end()){
    //             m.insert( make_pair (v[i][j],nine_to_one ) );
               
    //             v[i][j] = nine_to_one--;
    //         }
    //         else{
    //             v[i][j] = iter->second;
    //         }
    //     }
    // }

    // while(v[0].size() == 0){
    //     v.erase(v.begin());
    // }
    
    // int total = 0;
    
    // for(int i = 0 ; i < v.size() ; ++i){
    //     for(int j = 0 ; j < v[i].size(); ++j){
    //         total = ((v[i][j]-'0') * pow(10,(v.size()-1-i))) + total;
    //     }
    // }

    // cout << total << endl;

    //방법 2

    int N;
    cin >> N;

    string s;

    map<char , int> m;

    for(int i = 0 ; i < N ; ++i){
        cin >> s;

        for(int j  = 0 ; j < s.size() ; ++j){
            m[s[j]] += pow(10,(s.size() - j -1));
        }
    }

    vector<int> v;

    for(auto x : m){
        v.push_back(x.second);
    }

    sort(v.rbegin() , v.rend());

    int nin_to_one = 9;
    int total = 0;
    for(auto x : v){
        total += x * nin_to_one--;
    }

    cout << total;
}