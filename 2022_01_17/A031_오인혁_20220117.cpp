#include <iostream>

using namespace std;

int main(int args , char** argv){
    int N;
    int M;
    cin >> N;
    cin >> M;

    int result = N-1 + (N * (M -1));

    cout << result;
}