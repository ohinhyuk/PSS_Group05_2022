#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> change;
        for(int i = 0 ; i < bills.size() ; i ++){
            if(bills[i]==5){
                change.insert(change.begin() , 5);
            }
            if(bills[i]==5){
                change.push_back(10);
                // 5를 꺼내는데 find를 써서 없으면 false를 return하자.    
            }
        }
    }
};