#include <iostream>

using namespace std;

long long int sum_one_until_a(long long int a){
    long long int sum = a * (a+1) / 2;

    return sum;
}

int main( int args , char**argv){

    long long int N;
    long long int answer;

    cin >> N;
    
    
    for(long long int i = 1 ; i <= N ; ++i){
        if(N - sum_one_until_a(i) <= i){
            answer = i;
            break;
        }
    }
    
    cout << answer;
}