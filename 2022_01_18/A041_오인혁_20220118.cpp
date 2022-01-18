#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    s[0] = toupper(s[0]);
    if(s[1] != ' '){
        s[1] = tolower(s[1]);
    }
    for(int i = 1 ; i < s.size() ; i++){
        if(i==s.size()-1){
            continue;
        }
        else if(s[i]==' '){
            if(s[i+1]!=' '){
                s[i+1] = toupper(s[i+1]);
            }
        }
        else if(s[i]!= ' '){
            s[i+1] = tolower(s[i+1]);
        }
        
    }
    answer = s;
    return answer;
}