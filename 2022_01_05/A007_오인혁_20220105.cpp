#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int args, char ** argv){
    
    vector<int> v;
    vector<int> aes;
    vector<int> des;
    
    for(int i = 0 ; i < 8 ; i ++ ){
        cin >> v[i];
        aes[i]= v[i];
        des[i]= v[i];
    }

    sort(aes.begin() , aes.end());
    sort(des.rbegin() , des.rend());
    int a = 0 ;
    int b = 0 ;

    if(v== aes){
        cout << "ascending";
    }
    else if(v == des){
        cout << "descending";
    }
    else{
        cout << "mixed";
    }

    return 0;
}