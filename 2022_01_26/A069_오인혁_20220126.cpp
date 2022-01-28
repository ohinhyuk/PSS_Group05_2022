#include <iostream>
#include <vector>

using namespace std;

int main(int args , char** argv){
    vector<int> v;
    int N,K;
    cin >> N >> K;
    vector<int> result;
    for(int i = 1 ; i <= N ; i++){
        v.push_back(i);
    }

    int cnt = 1;
    int remove;
    int cnt_move = 1;
    while(!v.empty()){
        if(cnt % K==0){
            if(cnt_move % N==0) remove = N-1;
            else{
                remove = cnt_move % N - 1;
            }
            result.push_back(v[remove]);
            v.erase(v.begin() + remove);
            N--;
            cnt_move--;
        }
        cnt_move++;
        cnt++;
    }

    for(auto x : result){
        cout << x << " " ;
    }
}