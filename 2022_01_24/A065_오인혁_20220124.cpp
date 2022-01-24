#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int args, char** argv){
    int N ;
    cin >> N;

    vector<pair<int, int>> v;

    pair<int,int> temp;
    for(int i = 0 ; i < N ; ++i){
        cin >> temp.first >> temp.second;
        v.push_back(temp);
    }

    sort(v.begin() , v.end());

    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }

}