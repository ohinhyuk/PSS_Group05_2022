#include <iostream>
#include <vector>

using namespace std;

int score(string s){
    vector<char> circle;
    int result = 0;
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i]=='O'){
            circle.push_back(s[i]);
            result += circle.size();
        }
        else{
            if(!circle.empty())
                circle.erase(circle.begin() , circle.end());
        }
    }
    return result;
}

int main(int args , char** argv){
    int N;
    cin >> N;
    string s;
    for(int i = 0 ; i < N ; ++i){
        cin >> s;
        cout << score(s) << endl;
    }
}