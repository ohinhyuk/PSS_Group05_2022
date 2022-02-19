#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int args ,char** argv){

    string str;
    cin >> str;

    vector<char> ops; // str에 들어있는 + , - 순서대로 저장.
    vector<int> nums; // str에 들어있는 숫자들 순서대로 저장.

    int first_index = 0;
    int last_index = 0;

    // 입력된 문장을 + , - 와 숫자들로 분류. substr 사용.

    for(int i = 0 ; i < str.size() ; ++i){

        if(str[i] == '+'){
            nums.push_back(stoi(str.substr(first_index , last_index - first_index)));
            ops.push_back(str[i]);
            first_index = i + 1;
            last_index++;
        }
        else if(str[i] == '-'){
            nums.push_back(stoi( str.substr(first_index , last_index - first_index)));
            ops.push_back(str[i]);
            first_index = i + 1;
            last_index++;
        }
        else if(i==str.size() - 1){
            nums.push_back(stoi(str.substr(first_index , last_index + 1 - first_index)));
        }
        else{
            last_index++;
        }
    }

        int total = nums[0];
        
        for(int i = 0 ; i < ops.size() ; ++i){
            
            if(ops[i]=='-'){
                for(int j = i + 1 ; j < nums.size() ; ++j){
                    total -= nums[j];
                }
                break;
            }

            else if(ops[i]=='+'){
                total += nums[i+1];
            }

        }
    cout << total;
}