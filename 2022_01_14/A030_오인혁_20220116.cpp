#include <iostream>
#include <vector>

using namespace std;

void recursion (float percent, int N, bool feeling,vector<float> v, vector<float>& result){
    float temp = percent;
    if(feeling == 0 && N > 0){
        // 좋 -> 좋
        temp = percent * v[0];
        recursion(temp,N-1,0,v,result);
        //좋 -> 싫
        temp = percent * v[1];
        recursion(temp ,N-1,1 , v,result);
    }
    else if(feeling == 1 && N > 0){
        // 싫 -> 좋
        temp = percent * v[2];
        recursion(temp , N-1 ,0,v,result);
        //싫 -> 싫
        temp = percent * v[3];
        recursion(temp , N-1, 1 , v,result);
    }
    else{
        if(feeling==0){
            result[0] += percent;
        }
        else if(feeling==1){
            result[1] += percent;
        }
    }
}

int main(int args, char** argv){
    int N;
    bool feeling;
    float percent;
    cin >> N;
    cin >> feeling;
    vector<float> v;
    vector<float> result;
    result.push_back(0);
    result.push_back(0);
    for( int i = 0 ; i < 4; ++i){
        cin >> percent;
        v.push_back(percent);
    }
    recursion(1,N,feeling,v,result);
    cout << result[0]*1000 <<endl;
    cout << result[1]*1000 <<endl;
}