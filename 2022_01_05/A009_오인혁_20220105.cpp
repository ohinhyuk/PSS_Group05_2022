#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
   
    bool answer = true;

    if(s.size()==4 || s.size()==6){
    }
    else{
        answer = false;
    }

    for(auto x : s){
        if((int)x >=48 && (int)x <=57){
        }
        else{
            answer = false;
        }
    }
    return answer;
}

int main(int args , char** argv){
    string s = "a234";
    string s2 = "1234";
    cout << solution(s) << ' ';
    cout << solution(s2) << ' ';
}