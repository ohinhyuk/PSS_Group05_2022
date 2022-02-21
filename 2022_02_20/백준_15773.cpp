#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int args ,char** argv){
    int a , b , N;
    cin >> N;
    vector<pair<int,int>> v;


    for(int i = 0 ; i < N ; ++i){
        cin >> a >> b;
        
        v.push_back(make_pair(a,b));
    }

    sort(v.begin() , v.end());

    // for(auto x : v) cout << x.first << x.second ;

    int height = 0;
    int cnt = 0;

    for(int i = 0 ; i < v.size() ; ++i){
        if(height <= v[i].first){
            height += v[i].second;
            cnt++;
        }
    } 

    cout << cnt;
}