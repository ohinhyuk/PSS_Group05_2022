#include <iostream>
#include <vector>

using namespace std;

int main(int args ,char** argv){

    int N ;
    int temp;

    cin >> N;

    vector<int> street;
    vector<int> cost_gas;

    for(int i = 0 ; i < N-1 ; ++i){
        cin >> temp;
        street.push_back(temp);
    }
    
    for(int i = 0 ; i < N; ++i){
        cin >> temp;
        cost_gas.push_back(temp);
    }

    long long int min_in_range = cost_gas[0];
    long long int total = min_in_range * street[0];

    for(int i = 1 ; i < N-1 ; ++i){
        if(min_in_range > cost_gas[i]) min_in_range = cost_gas[i];
        total += (street[i] * min_in_range);
    }

    cout << total;
}