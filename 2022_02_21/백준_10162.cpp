#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> v = {300 , 60 , 10};
    vector<int> result = {0 , 0, 0};
    int N;
    cin >> N;
    for(int i = 0 ; i < v.size() ; ++i){
        if(N >= v[i]){
            N -= v[i];
            result[i]++;
            i--;
        }
        else if(N == 0) break;
    }

    if(N != 0 ) cout << -1;
    else{
        for(auto x : result) cout << x << ' ';
    }
}