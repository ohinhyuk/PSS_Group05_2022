#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    for(int i = 0; i <s.size() ; i++){
        s[i] = tolower(s[i]);
    }

    int posy = 0;
    int posp = 0;
    int county = 0;
    int countp = 0;
    while(1){
        posy = s.find("y" ,posy);
        if(posy == string::npos){
            break;
        }
        else{
            posy++;
            county++;
        }
        
    }
    while(1){
        posp = s.find("p" ,posp);
        if(posp == string::npos){
            break;
        }
        else{
            posp++;
            countp++;
        }
    }
    if(countp!=county){
        answer = false;
    }
    return answer;
}

int main(int args, char** argv){
    string s = "pPoooyY";
    cout << solution(s);
}