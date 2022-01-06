#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<float> percent;
    vector<float> percent2;

    int false_num = 0;
    int total_num = 0;
    float perc = 0;
    for(int i = 1; i< N+1 ; i++){
        for(int j = 0; j<stages.size() ; j++){
            if(i==stages[j]){
                false_num++;
            }
            if(i<=stages[j]){
                total_num++;
            }
        }
        if(total_num==0){
            percent.push_back(0);
        }
        else{
            perc =(float)false_num / total_num;
            percent.push_back(perc);
        }
        perc = 0;
        false_num = 0;
        total_num = 0;
    }
    percent2 = percent;
    sort(percent2.rbegin() , percent2.rend());
    
    for(int i = 0 ; i <N ; i++){
        answer.push_back(find(percent.begin(), percent.end() , percent2[i]) - percent.begin() + 1);
        percent[find(percent.begin(), percent.end() , percent2[i]) - percent.begin()] = -1;
    }
    return answer;
}

int main(int args, char** argv){
    vector<int> stages;
    int N = 4;
    // stages.push_back(2);
    // stages.push_back(1);
    // stages.push_back(2);
    stages.push_back(4);
    stages.push_back(4);
    stages.push_back(4);
    stages.push_back(4);
    stages.push_back(4);

    for(auto x : solution(N,stages)){
        cout << x << ' ';
    }
}
// 같은 것들 있으면 매칭할 때 잘 건너뛰도록.