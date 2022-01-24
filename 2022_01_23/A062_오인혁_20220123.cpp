#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[12] = { 31 , 29 ,31 , 30 , 31, 30 , 31, 31 , 30 , 31 , 30, 31};
    int total = 0;
    for(int i = 0 ; i < a; i++){
        total += arr[i];
    }
    total -= (arr[a-1] - b);
    total %= 7;
    
    switch(total){
        case 0:
            answer = "THU";
            break;
        case 1:
            answer = "FRI";
            break;
        case 2:
            answer = "SAT";
            break;
        case 3:
            answer = "SUN";
            break;
        case 4:
            answer = "MON";
            break;
        case 5:
            answer = "TUE";
            break;
        case 6:
            answer = "WED";
            break;
    }    
    
    return answer;
}