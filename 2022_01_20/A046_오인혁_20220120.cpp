#include <iostream>
#include <map>

using namespace std;

int main(int args , char** argv){
    map<char, int> m;

    string s;

    int N;

    cin >> N;

    for(int i = 0 ; i < N ; ++i){
        cin >> s;
        m[s[0]]++;
    }
    int cnt = 0;
    for(auto x : m){
        if(x.second >=5 ) {
            cout << x.first;
            cnt++;
        }
    }
    if(cnt == 0) cout<< "PREDAJA";
}