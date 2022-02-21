#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int args , char** argv){
    int N , K;
    cin >> N >> K;

    vector<int> v;

    int temp;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp ;
        v.push_back(temp);
    }
    int cnt = 0;
    for(int i = N-1 ; i >= 0 ; --i){
        if(K >= v[i]){
            K -=v[i];
            cnt++;
            i++;
        }
        else if(K == 0){
            break;
        }
    }

    cout << cnt;
    
}