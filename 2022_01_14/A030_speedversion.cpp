#include <iostream>
#include <vector>


using namespace std;

int main( int args , char** argv){
    int N;
    float feeling;

    cin >> N;
    cin >> feeling;

    float g_to_g;
    float g_to_b;
    float b_to_g;
    float b_to_b;

    cin >> g_to_g;
    cin >> g_to_b;
    cin >> b_to_g;
    cin >> b_to_b;

    float result_g = 0;
    float result_b = 0;

    if(N==1 && feeling ==0){
        cout << g_to_g *1000 <<endl;
        cout << g_to_b * 1000 <<endl;
    }
    else if(N==1 && feeling ==1){
        cout << b_to_g *1000 <<endl;
        cout << b_to_b * 1000 << endl;
    }
    else if(N >= 2){
        if(feeling ==0){
            result_g = g_to_g;
        }
        else{
            result_g = b_to_g;
        }
        for(int i = 0 ; i < N-1 ; ++i){
            result_g = ((g_to_g -b_to_g) * result_g) + b_to_g;
        }
        result_b = 1 - result_g;
        cout << fixed;
        cout.precision(0);
        cout << result_g *1000 << endl;
        cout << result_b * 1000 <<endl;
    }

}