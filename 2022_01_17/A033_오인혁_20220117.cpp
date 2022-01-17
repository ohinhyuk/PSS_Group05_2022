#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int args, char** argv){

    vector<int> total;
    int number = 0;
    int sum = 0;
    int score;

    for(int i = 1 ; i <= 5 ; ++i){
        for(int j = 0 ; j < 4 ; ++j){
            cin >> score;
            sum += score;
        }
        if(total.empty()){
            total.push_back(sum);
            number = i;
        }
        else if(total.front() <sum ){
            total.pop_back();
            total.push_back(sum);
            number = i;
        }
        sum = 0;
    }
    cout << number << ' ' <<total[0];
}