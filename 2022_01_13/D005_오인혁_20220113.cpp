#include <iostream>
#include <map>
#include <vector>

using namespace std;



int main(int args, char** argv){
    int N, M;
    map<string,int> m;
    vector<string> v;

    cin >> N >> M;
    string s;

    for(int i = 0; i < N+M ; ++i){
        cin >> s;
        m[s]++;
    }

    for(auto x : m){
        if(x.second == 2) v.push_back(x.first);
    }

    cout << v.size() << endl;
    for(auto x : v){
        cout << x << endl;
    }
}