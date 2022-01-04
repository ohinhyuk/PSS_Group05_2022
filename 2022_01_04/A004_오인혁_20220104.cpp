#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr , int divisor){
    vector<int> answer;
    while(!arr.empty()){
        if(arr.back() % divisor == 0){
            answer.push_back(arr.back());
        }
            arr.pop_back();
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    sort(answer.begin() , answer.end());
    return answer;
}

int main(int args , char ** argv){

}