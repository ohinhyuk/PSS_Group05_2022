#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
//v에는 몇명인지 빼고 집어넣어서 가져오기.
float aver(vector<int>& v) {
    float avr = 0;
    int sum = 0;
    int cnt = 0;
    float percent = 0;

    for(int i = 0 ;i < v.size() ; i++){
        sum += v[i];
    }
    avr = sum / v.size();

    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]>avr){
            cnt++;
        }
    }

    percent = (float)(cnt * 100) / v.size();

        v.erase(v.begin() , v.end());
    
    return percent;
}

int main(int args , char** argv){
    int iter1 = 0;
    int iter2 = 0;
    cin >>  iter1;
    int tem = 0;

    float result = 0;
    vector<int> temp;

    for(int j = 0 ; j < iter1 ; j++){
        cin >> iter2;        
        for(int k = 0 ;k < iter2 ; k++){
            cin >> tem;
            temp.push_back(tem);
        }

        result = aver(temp);
        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
    }

}