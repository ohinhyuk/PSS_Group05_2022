#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int args ,char ** argv){
    
    int N; // 좌표의 갯수
    int X; // 좌표 값

    vector<int> v; // 중복 제거 , 오름차순 정렬 할 벡터

    cin >> N;

    while(N--){
        cin >> X;
        v.push_back(X);     
    }

    vector<int> v_before(v); // 입력 된 그대로의 벡터.

    sort(v.begin() , v.end()); // 오름차순 정렬
    v.erase(unique(v.begin() , v.end()), v.end()); // 중복 제거

    vector<int> result;

    for(int i = 0 ; i < v_before.size() ; ++i){
            result.push_back(lower_bound(v.begin() , v.end() , v_before[i]) - v.begin()); 
    }

    for(auto x : result){
        cout << x << ' ';
    }


}