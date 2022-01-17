#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


    void cal_can_move(vector<vector<int>> v,int i ,int j, int N, int cnt , vector<int> & result){
        cnt++;
        if(((i-1) >= 0) && (v[i-1][j] > v[i][j])){
            
            cal_can_move(v,i-1,j,N,cnt,result);
        }
        if( ((i+1) < N) && (v[i+1][j] > v[i][j])){
            
            cal_can_move(v,i+1,j,N,cnt,result);
        }
        if( ((j-1) >=0) && (v[i][j-1] > v[i][j])){
            
            cal_can_move(v,i,j-1,N,cnt,result);
        }
        if(((j+1) < N) && (v[i][j+1] > v[i][j])){
            cal_can_move(v,i,j+1,N,cnt,result);
        }
        result.push_back(cnt);
        
    }

int main(int args, char** argv){
        
    int N;
    cin >> N;
    int input;
    vector<int> real_result;
    vector<int> result;
    int cnt = 0;
    vector<vector<int>> v(N , vector<int>(N,0));
    for(int i = 0 ; i <N ; ++i){
        for(int j = 0 ; j <N ; ++j){
            cin >> input;
            v[i][j] = input;
        }
    }

    for(int i = 0 ; i < N; ++i){
        for(int j = 0 ; j < N ; ++j){
            cal_can_move(v,i,j,N,cnt,result);
            sort(result.begin(), result.end());
            real_result.push_back(result[result.size()-1]);
            result.erase(result.begin(), result.end());
        }
    }
    sort(real_result.begin(), real_result.end());
    cout << real_result[real_result.size()-1];
}