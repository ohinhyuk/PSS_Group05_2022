#include <iostream>
#include <vector>

using namespace std;

int main(int args, char** argv){
    int N = 0 ;

    cin >> N;

    int total_plug = 0;
    int temp=0;
    for(int i = 0 ; i < N ; i++){
        cin >> temp;
        total_plug+=temp;
    }
    total_plug += 1;
    total_plug -= N;

    cout << total_plug;
}