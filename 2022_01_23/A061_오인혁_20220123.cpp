#include <algorithm>
#include <cmath>
class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char> result;
        int temp = columnNumber;
        int num;
        int N = 0;
        while(temp > 0){
            temp = temp / 26;
            N++;
        }
            temp = columnNumber;
        while(temp > 26){
            num = temp%26;
            if(num == 0){
                result.push_back(char(num+90));
                temp = (temp / 26) -1;
            }
            else{
                result.push_back(char(num+64));
                temp = temp / 26;
            }
        }
        
        result.push_back(char(temp+64));
        
        string s;
        for(int i = result.size()-1 ; i >= 0 ; --i){
            s += result[i];
        }
        return s;
    }
};