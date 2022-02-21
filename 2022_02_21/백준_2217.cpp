#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int args ,char ** argv){
    int N ;
    int temp;

    cin >> N;

    vector<int> v;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.rbegin() , v.rend());

    int max_weight = 0 ;

    for(int i = 0 ; i < v.size() ; ++i){
        if(max_weight < v[i] * (i+1)) max_weight = v[i] * (i+1);
    }

    cout << max_weight;
}