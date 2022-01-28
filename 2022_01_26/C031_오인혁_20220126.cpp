#include <iostream>
#include <string>

using namespace std;

int main(int args , char** argv){
    string s_contain;
    cin >> s_contain;
    string s;

    if(s_contain[0]=='-') s=s_contain.substr(1);
    else{
        s = s_contain;
    }
    string result;



    if(s.find('+')==string::npos && (s.find('-')==string::npos) ){
        if(s.find('x')==string::npos){
            // 숫자만
            if(s=="1") result = "x+W";
            else if(s=="-1") result = "-x+W";
            else if(s=="0") result = "W";
            else{
                result = s + "x+W";
            }
        }
        else{
            // 1차만
            if(s.substr(0,s.size()-1)=="2") result = "xx+W";
            else{
                result = to_string(stoi(s.substr(0,s.size()-1))/2) + "xx+W";
            }
        }
    }
    else{
        //둘다 있을 때
        if(s.substr(0,s.find('x'))=="2") result= "xx";
        else{
            result = to_string(stoi(s.substr(0,s.find('x')))/2) + "xx";
        }
        if(s.find('+')!=string::npos){
            if(s.substr(s.find('+')+1)=="1") result+="+x+W";
            else if(s.substr(s.find('+')+1)=="0") result+="+W";
            else{    
                result += ('+' + s.substr(s.find('+')+1) + "x+W");
            }
        }
        else{
            if(s.substr(s.find('-')+1)=="1") result+="-x+W";
            else if(s.substr(s.find('-')+1)=="0") result+="+W";
            else{
                result += ('-' + s.substr(s.find('-')+1) + "x+W");
            }
        }
    }

    string real_result;
    if(s_contain[0]=='-') real_result = '-' + result;
    else{
        real_result = result;
    }
    cout << real_result;

    
}