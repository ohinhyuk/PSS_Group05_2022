#include <iostream>
#include <vector>

using namespace std;

int young_cal(int time){
    int cost = 0;
    cost = (time / 30) * 10 + 10;

    return cost;
}

int min_cal(int time){
    int cost = 0;
    cost = (time / 60) * 15 + 15;
    return cost;
}


int main(int args, char** argv){
    int N= 0;
    vector<int> young;
    vector<int> min;
    cin >> N;
    int time = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> time;
        
        young.push_back(young_cal(time));
        min.push_back(min_cal(time));

    }

    int y_total = 0;
    int m_total = 0;

    for(auto x : young){
        y_total += x;
    }
    for(auto y : min){
        m_total += y;
    }
    if( y_total == m_total){
        cout << "Y M " << y_total;
    }
    else if( y_total > m_total){
        cout << "M " << m_total;
    }
    else if(y_total < m_total){
        cout << "Y " << y_total;
    }
}