#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> change;
        for(int i = 0 ; i < bills.size() ; i ++){
            if(bills[i]==5){
                change.insert(change.begin() , 5);
            }
            else if(bills[i]==10){
                change.push_back(10);
                // 5를 꺼내는데 find를 써서 없으면 false를 return하자.
                if(find(change.begin(), change.end() , 5)==change.end()){
                    return false;
                }
                else{
                    change.erase(change.begin());
                }
            }
            else if(bills[i]==20){
                if(find(change.begin(), change.end() , 10)==change.end()){
                    for(int i = 0 ; i < 3 ; i++){
                        if(find(change.begin(), change.end() , 5)!=change.end()){
                            change.erase(change.begin());
                        }
                        else{
                            return false;
                        }
                    }
                }
                else{
                    change.pop_back();
                    if(find(change.begin(), change.end() , 5)!=change.end()){
                        change.erase(change.begin());
                    }
                    else{
                        return false;
                    }
                }
            }

        }
        return true;
    }
};