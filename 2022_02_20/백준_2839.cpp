#include <iostream>
#include <vector>

using namespace std;

int main(int args , char** argv){
    int N;

    int answer = -1;

    cin >> N;

    for(int three = 0 ; three <= N/3 ; ++three){
        for(int five = 0 ; five <= N/5 ; ++five){

            if(3*three + 5*five == N){
                
                if(three+five < answer || answer == -1){
                    answer = three + five;
                }
            
            }
            
        }
    }

    cout << answer;
}