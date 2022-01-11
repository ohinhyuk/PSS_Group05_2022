#include <iostream>
#include <vector>
using namespace std;

void recursion (vector<int> & v , int i ,bool *check){
    if(i > v.size() || i <= 0){
    }
    else{
        check[i-1] = true;
        recursion(v, i + v[i-1] , check);
        recursion(v , i - v[i-1] , check);
    }
}

int main(int args, char** argv){
    int num;
    vector<int> v;

    cin >> num;
    int input_to_vector;
    for(int i = 0 ;i < num ; i++){
        cin >> input_to_vector;
        v.push_back(input_to_vector);
    }

    bool check[num];
    for( int i = 0 ; i <num; i++){
        check[i] = false;
    }

    int first_order;

    cin >> first_order;
    
    recursion(v,first_order,check);

    int cnt = 0;

    for(int j = 0 ; j < num ; j++){
        if(check[j]==true) cnt++;
    }

    cout << cnt;
}