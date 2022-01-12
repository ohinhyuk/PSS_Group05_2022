#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void make_6_digit_use_rec(int arr[][5] , int i , int j, int cnt, vector<int> v, vector<int>& result){
    v.push_back(arr[i][j]);
    cnt++;
    if(cnt < 6){
        if(i+1 < 5) make_6_digit_use_rec(arr , i+1 , j , cnt , v, result);
        if(i-1 >= 0) make_6_digit_use_rec(arr , i-1 , j , cnt , v, result);
        if(j+1 < 5) make_6_digit_use_rec(arr, i , j+1 , cnt , v , result);
        if(j-1 >= 0 ) make_6_digit_use_rec(arr , i , j-1 , cnt , v, result);
    }
    else{
        int sum =0 ;
        for(int k = 0 ; k <6 ; k++){
            sum += v[k] * pow(10 , 5-k);
        }
        if(find(result.begin() , result.end() , sum)==result.end()) result.push_back(sum);
    }
}

void recursion (int arr[][5] ,vector<int> v, vector<int>& result){
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            make_6_digit_use_rec(arr,i,j,0,v,result);
        }
    }
}

int main(int args , char** argv){
    vector<int> v;
    vector<int> result;
    int num = 0;
    int arr[5][5];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> num;
            arr[i][j] = num;
        }
    }
    recursion(arr,v,result);
    
    cout << result.size();
    
}