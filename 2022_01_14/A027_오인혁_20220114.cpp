#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void add(int* arr1 ,int* arr2 , int N){
    vector<int> result;

    for(int i = N-1 ; i >= 0 ; --i){
        if(arr1[i] + arr2[i] >= 10){
            if(i ==0) {
                result.insert(result.begin() , arr1[i]+arr2[i]-10);
                result.insert(result.begin() , 1);
            }
            else{
                result.insert(result.begin() ,arr1[i]+arr2[i]-10);
                arr1[i-1]++;
            }
        }
        else{
            result.insert(result.begin(),arr1[i] + arr2[i]);
        }
    }
    
    for(int i = 0 ; i < result.size() ;++i){
        cout << result[i];
    }
}

int main(int args, char** argv){
    vector<int> v1;
    vector<int> v2;
    string num1;
    string num2;
    
    cin >> num1;
    cin >> num2;
    if(num1.size() > num2.size()){
        int arr1[num1.size()];
        int arr2[num1.size()];
        for(int i = 0 ; i < num1.size(); ++i){
            arr1[i]=num1[i]-'0';
        }
        for(int i = 0 ; i < num1.size()-num2.size() ; i++){
            arr2[i] = 0;
        }
        for(int j = 0 ; j <num2.size() ; ++j){
            arr2[j+(num1.size()-num2.size())] = num2[j]-'0';
        }

        
        add(arr1,arr2,num1.size());
    }
    else if (num1.size()==num2.size()){
        int arr1[num2.size()];
        int arr2[num2.size()];
        for(int i = 0 ; i < num2.size(); i++){
            arr1[i] = num1[i]-'0';
            arr2[i] = num2[i]-'0';
        }

    
        add(arr1,arr2,num1.size());
    }
    else{
        int arr1[num2.size()];
        int arr2[num2.size()];
        for(int i = 0 ; i < num2.size();++i){
            arr2[i] = num2[i]-'0';
        }
        for(int i = 0 ; i < num2.size()-num1.size() ; ++i){
            arr1[i] = 0;
        }
        for(int i = 0 ; i < num1.size() ; ++i){
            arr1[i+(num2.size()-num1.size())] = num1[i]-'0';
        }

        add(arr1,arr2,num2.size()); 
    }

    
    
}