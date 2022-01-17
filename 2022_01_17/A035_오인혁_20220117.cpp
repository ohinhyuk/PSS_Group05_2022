#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int args, char** argv){
    int N;
    string s;
    char ch;
    cin >> N;
    float num = 0;

    for(int i = 0 ; i < N ; ++i){
        cin >> num;
        getline(cin,s);
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] =='@'){
                num *= 3;
            }
            else if(s[i]=='%')
                num += 5;
            else if(s[i]=='#')
                num -= 7;
            else if(s[i] == ' '){
                continue;
            }
        }

        cout << fixed;
        cout.precision(2);
        cout << num << endl;
        num = 0;
    }
}