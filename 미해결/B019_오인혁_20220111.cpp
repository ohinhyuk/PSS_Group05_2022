#include <iostream>
#include <vector>

using namespace std;


void count_parts(vector<vector<char>>& v , int N , int i , int j){
    
    if( (j+1 < N) && (v[i][j] == v[i][j+1]) ){
        v[i][j] = 'L';
        count_parts(v,N,i,j+1);
    }
    
    
    else if((i-1 >=0) && (v[i][j] == v[i-1][j])){
        v[i][j] = 'L';
        count_parts(v,N,i-1,j);
    }
    else if((i+1 < N) && (v[i][j] ==v[i+1][j])){
        v[i][j] = 'L';
        count_parts(v,N,i+1,j);
    }
    else if((j-1 >=0) && (v[i][j] ==v[i][j-1])){
        v[i][j] = 'L';
        count_parts(v,N,i,j-1);
    }
    else{
        v[i][j] = 'L';
    }
}
int main(int args, char** argv){
    int N ;
    cin >> N;
    string s;
    vector<char> v;
    vector<vector<char>> v2;
    for(int i = 0 ; i < N ; i++){
        cin >> s;
        for(int j = 0; j < N ; j++){
            v.push_back(s[j]);
        }
        v2.push_back(v);
        v.erase(v.begin() , v.end());
    }
    int cnt = 0;
    int cnt_dis = 0;
    
    vector<vector<char>> v3(v2);
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ;j <N ;j++){
            if(v3[i][j]=='G') v3[i][j] = 'R';
        }
    }
    
    for(int i = 0; i < N ; i++){
        for(int j = 0 ;j <N ; j++){
            if(v2[i][j]!='L'){
                count_parts(v2,N,i,j);
                
                cnt++;
            }
            if(v3[i][j]!='L'){
                count_parts(v3,N,i,j);

                cnt_dis++;
            }
        }
    }



    cout << cnt;
    cout << cnt -1;
}