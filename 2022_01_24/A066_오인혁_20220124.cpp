#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int args , char** argv){
    long long int N ;
    cin >> N;
    vector<int> v;
    while(N > 0){
        v.push_back(N % 10);
        N = N/ 10;
    }
    sort(v.rbegin(),v.rend());
    for(auto x : v){
        cout << x;
    }    
}