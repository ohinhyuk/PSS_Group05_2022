#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int find_minimam_mak_num(int num){
    int N = 1;
    int num_copy = num;
    int sum = 0;
    vector<int> v;
    int temp = 0;

    while(num_copy>=10){
        num_copy = num_copy / 10;
        N++;
    }
    if(N<3){
        for(int i = 1 ; i < num ; i++){
            temp = i;
        while(temp >= 10){
            
            sum += (temp % 10);
            temp = temp / 10;
        }
        sum += temp;
        sum += i;
        if(sum==num) v.push_back(i);

        sum = 0;
        }
    }
    else{
        for(int i = num-N*9 ; i < num ; i++ ){
            temp = i;
        while(temp >= 10){
            
            sum += (temp % 10);
            temp = temp / 10;
        }
        sum += (temp + i);

        if(sum==num) v.push_back(i);

        sum = 0;
        }
    }
    if(v.empty()) 
        return 0;

    sort(v.begin(),v.end());
    
    return v[0];
}

int main(int args, char** argv){
    int num ;
    cin >> num;
    cout << find_minimam_mak_num(num);
}