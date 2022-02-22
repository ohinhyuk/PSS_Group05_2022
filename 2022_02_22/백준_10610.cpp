#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int args , char** argv){
    vector<int> nums; // 각 자리 숫자 저장.
    
    int check = 0; // 3의 배수인지 확인을 위한 변수

    string N; // 입력
    cin >> N;

    for(int i = 0 ; i < N.size() ; ++i){
        nums.push_back(N[i]-'0'); // char 숫자 -> int 숫자로 변환 ('0' 이용)
    }

    sort(nums.rbegin() , nums.rend());

    for(int i = 0 ; i < nums.size() ; ++i){
        check += nums[i];
    }
    
    if(check % 3 != 0) cout << -1; // 3의 배수인지 체크
    else if(nums[nums.size()-1] != 0) cout << -1; // 10의 배수인지 체크
    else{
        for(auto x : nums) cout << x; // 가장 큰 값 출력.
    }
    
}