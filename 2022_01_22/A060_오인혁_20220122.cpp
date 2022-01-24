#include <cmath>
#include <iostream>

using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> result;
        
        for(int i = 0 ; i < ops.size() ; ++i){
            
            
            if(ops[i]=="C"){
                result.pop_back();
            }
            else if(ops[i]=="D"){
                result.push_back(result.back()*2);
            }
            else if(ops[i]=="+"){
                result.push_back(result[result.size()-1] +result[result.size()-2]);
            }
            else{
                result.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for(int i = 0 ; i < result.size() ; ++i){
            sum += result[i];
        }
        return sum;
    }
};