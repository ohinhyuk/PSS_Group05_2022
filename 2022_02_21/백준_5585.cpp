#include <iostream>
#include <vector>

using namespace std;

int main(int args , char ** argv){
    int N ;

    cin >> N;
    N = 1000 - N;
    vector<int> v = {500 , 100 , 50 , 10 , 5 ,1};
    
    int cnt = 0;

    for(int i = 0 ; i < v.size() ; ++i){
        if(N >= v[i]){
            N = N - v[i];
            cnt++;
            i--;
        }
        else if(N == 0){
            break;
        }
    }
    cout << cnt;
}