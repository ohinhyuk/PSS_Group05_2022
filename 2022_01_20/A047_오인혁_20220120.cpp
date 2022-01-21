#include <iostream>

using namespace std;

int main(int args , char** argv){
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i){
        cout << s[i];
        if(i%10==9) cout << "\n";
    }
}