#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

vector<int> calcul(string multiple){
    vector<int> result;
    map<int,int> num;

    for(int i = 0 ; i < multiple.size() ; i ++){
        num[((int)multiple[i] - (int)'0')]++;
    }
    for(int i = 0 ; i < 10; i++){
        if(num.find(i)!=num.end()){
            result.push_back(num[i]);
        }
        else{
            result.push_back(0);
        }
    }





    return result;
}

int main(int args, char ** argv){
    int num = 0;
    int result = 1;
    vector<int> v;
    for(int i = 0 ; i < 3 ; i++){
        cin >> num;
        result *= num;
    }

    string s = to_string(result);
    v = calcul(s);

    for(auto x : v){
        cout << x << endl;
    }
}