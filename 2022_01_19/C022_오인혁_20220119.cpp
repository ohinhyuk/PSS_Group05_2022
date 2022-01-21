#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> all_sosu(int max){
    vector<int> all;
    bool is = true;
    for(int i = 2 ; i < max *3 ; ++i){
        for(int j = 2 ; j <= i*i ; ++j){
            if(i%j == 0 && i!=j){
                is = false;
                break;   
            }
        }
        if(is == true){
            all.push_back(i);
        }
        is = true;
    }
    return all;
}

int solution(vector<int> nums) {
    int answer = -1;
    vector<int> v;
    int cnt = 0;
    sort(nums.begin(), nums.end());
    
    v = all_sosu(nums[nums.size()-1]);
    
    for(int a = 0 ; a < nums.size()-2 ; ++a){
        for(int b = a+1 ; b < nums.size()-1 ; ++b){
            for(int c = b+1 ; c < nums.size() ; ++c){
                if(find(v.begin() ,v.end() ,nums[a] + nums[b] + nums[c])!=v.end()) cnt++;
            }
        }
    }
    return cnt;
}