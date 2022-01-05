#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    vector<string> v;

    string substr;
    int temp = 0;
    for(int i = 1; i<= s.size() ; i++){
        while(s.size()-temp>=i){
            substr = s.substr(temp,i);
            if(v.empty() || v.back() ==substr){
                v.push_back(substr);
                temp += i;
            }
            else{
                
            }
            temp += i;
        }

    }

    return answer;
}

int main(int args , char** argv){

}