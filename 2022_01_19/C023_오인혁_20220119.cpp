#include <iostream>
#include <string>

using namespace std;

int main(int args, char** argv){
    int M; //층
    int N; //층당 창문 갯수

    cin >> M >> N;
    
    char windows[(5*M)+1][(5*N)+1];

    char window;

    for(int a = 0 ; a < (5*M)+1 ; ++a){
        for(int b = 0 ; b <(5*N)+1 ; ++b){
            cin >> window;
            windows[a][b] = window;
        }
    }

    int result[5]={0,0,0,0,0};

    int cnt = 0;
    for(int x = 1 ; x < (5*M)+1 ; x+=5){
        for(int y = 1 ; y < (5*N)+1 ; y+=5){
            for(int down = x ; down < x+4 ; down++){
                if(windows[down][y]=='*'){
                    cnt++;
                }
            }
            result[cnt]+=1;
            cnt = 0;
        }
    }

    for(int i = 0 ; i <5 ; ++i){
        cout << result[i] << ' ';
    }

}