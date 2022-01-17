#include <iostream>

using namespace std;

int main(int args , char ** argv){
    int N;
    int k;
    int n;
    cin >> N;
    int arr[16][16]{};
    for(int i = 1 ; i <= 15 ; i++){
        arr[0][i] = i;
    }
    for(int j = 1 ; j <= 15 ; j++){
        for(int i = 1 ; i <= 15 ; i++){
            for(int k = 0 ; k < i ; k++){
                arr[j][i] += arr[j-1][i-k];
            }
        }
    }



    for(int i = 0 ;  i < N ; i++){
        cin >> k;
        cin >> n;
        cout << arr[k][n] << endl;
    }
}