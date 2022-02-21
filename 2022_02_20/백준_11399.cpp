#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int args ,char** argv){
    int N;
    cin >> N;

    vector<int> pi;
    int temp;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        pi.push_back(temp);
    }

    sort(pi.begin() , pi.end());

    int pi_size = pi.size();
    int answer = 0 ;

    for(int i = 0 ; i < N ; ++i){
        answer += pi[i] * (pi_size-i);
    }

    cout << answer;

}