#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> plusOne(vector<int>& digits){
        vector<int> temp;
        while(digits.back()==9){
            digits.pop_back();
            temp.push_back(0);
        }
        temp.push_back(digits.back() + 1);
        digits.pop_back();
        while(!temp.empty()){
            digits.push_back(temp.back());
            temp.pop_back();
        }
        return digits;
    }
};

int main(int args, char ** argv){
    vector<int> digits;
    digits.push_back(1);
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(1);

    Solution sol;
    sol.plusOne(digits);

    for(auto x : digits){
        cout << x ;
    }
}