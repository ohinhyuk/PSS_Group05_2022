#include <iostream>

using namespace std;

int main(int args, char** argv){
    int N ;
    
    int top = -1;
    int stack[10000];
    int num;
    cin >> N;
    string s;
    for(int i = 0 ; i < N ; ++i){
        cin >> s ;
        if(s=="push"){
            cin >> num;
            top++;
            stack[top] = num;
        }
        else if(s=="empty"){
            if(top == -1){
                cout << true << "\n";
            }
            else{
                cout << false << "\n";
            }
        }
        else if(s=="size"){
            cout << top +1 << "\n";
        }
        else if(s=="top"){
            if(top == -1){
                cout << -1 << "\n";
            }
            else{
                cout <<stack[top] << "\n";
            }
        }
        else if(s=="pop"){
            if(top == -1){
                cout << top << "\n";
            }
            else{
                cout << stack[top] << "\n";
                top--;
            }
        }
    }
}