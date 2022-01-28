#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int args , char** argv){
    int N;
    cin >> N;
    vector<int> v;
    int temp;
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < 10 ; ++j){
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin() , v.end());
        cout << v[7] << "\n";
        v.clear();
    }

    
}