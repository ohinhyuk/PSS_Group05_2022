#include <iostream>

using namespace std;

int main(int args, char** argv){
    int N ;
    cin >> N;
    int H;
    int W;
    int person;
    for(int i = 0 ; i <N ; i++){
        cin >> H;
        cin >> W;
        cin >> person;
        if(person % H== 0)
            cout << H*100 + (person/H) << endl ;
        else{
            cout << (person % H)*100 + (person/H)+1 << endl;
        }

    }
}