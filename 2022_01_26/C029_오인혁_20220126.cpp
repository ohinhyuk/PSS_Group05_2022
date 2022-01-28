#include <iostream>
#include <cmath>
using namespace std;

int main(int args , char** argv){
    int A ,B ,C ;

    cin >> A >> B >> C ;

    int sonik;
    
    if(C <= B){
        cout << -1;
        return 0;
    }
    
    sonik = A / (C-B) +1;
    
    cout << sonik;
    return 0;
}