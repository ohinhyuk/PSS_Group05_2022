//답은 맞으나 시간 초과
// 찾아보니 list 를 써야 한다고 한다. 시간 복잡도 때문인 것 같다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> password(string s){
    vector<char> v;

    int mouse_pointer = 0;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='<'){
            if(mouse_pointer>0)
                mouse_pointer --;
        }
        else if(s[i]=='>'){
            if(mouse_pointer < v.size())
                mouse_pointer++;
        }
        else if(s[i]=='-'){
            if(!v.empty() && mouse_pointer>0){
                v.erase(v.begin() + mouse_pointer -1);
                mouse_pointer--;
            }
        }
        else{
            if(mouse_pointer < v.size()){
                v.insert(v.begin()+mouse_pointer,s[i]);
                mouse_pointer++;
            }
            else{
                v.push_back(s[i]);
                mouse_pointer++;
            }
        }
    }
    return v;
}

int main(int args, char** argv){
    int N ;
    cin >> N;
    string s;
    vector<char> v;
    for(int i = 0 ; i < N ; i ++){
        cin >> s;
        
        v = password(s);
        for(auto x : v){
            cout << x ;
        }
        cout << endl;
    }

}