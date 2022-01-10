#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    //bool one = true;
    sort(people.begin() , people.end());

    int i = 0;
    int j = people.size() -1;

    while(i < j){
        if((people[i]+ people[j]) <=limit ){
            answer++;
            i++;
            j--;
        }
        else{
            j--;
        }
        
    }
    if(i >= j){
            answer += people.size() - answer * 2;        
    }

    // while(!people.empty()){
    //     for(int i = people.size()-1 ; i > 0 ; --i){
    //         if((people[0] + people[i]) <= limit){
    //             people.erase(people.begin() + i);
    //             people.erase(people.begin());
    //             answer++;
    //             one = false;
    //             break;
    //         }
    //     }
    //     if(one == true){
    //         while(!people.empty()){
    //             people.erase(people.begin());
    //             answer ++;
    //         }
    //     }
    //     one = true;
    // }
    return answer;
}

int main(int args, char** argv){
    vector<int> people;
    people.push_back(20);
    people.push_back(20);
    people.push_back(70);
    people.push_back(35);
    people.push_back(40);
    int limit = 70;
    cout << solution(people,limit);
}