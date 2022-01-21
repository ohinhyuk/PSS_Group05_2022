#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int args , char** argv){
    int N;
    cin >> N;
    string s;
    int temp;
    vector<int> v;
    for(int i = 0 ; i < N ; ++i){
        cin >> s;

        if(s=="push"){
            cin >> temp;
            v.push_back(temp);
        }
        else if(s=="top"){
            cout << v.back() << "\n";
        }
        else if(s=="size"){
            cout << v.size() << "\n";
        }
        else if(s=="empty"){
            cout << v.empty() << "\n";
        }
        else if(s=="pop"){
            if(v.size()==0){
                cout << -1 << "\n";
            }
            else{
                cout << v.back() <<"\n";
                v.pop_back();
            }
        }

    }
}