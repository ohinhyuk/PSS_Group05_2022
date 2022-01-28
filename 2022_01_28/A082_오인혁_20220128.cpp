#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

bool cmp(const pair<int,string> &a , const pair<int,string> &b){
    return a.first < b.first;
}

int main(int args , char** argv){
    vector<pair<int,string>> v;
    pair<int,string> p;
    int N;

    cin >> N;

    for(int i = 0 ; i <N ;++i){
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    stable_sort(v.begin(),v.end(),cmp);

    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }

}