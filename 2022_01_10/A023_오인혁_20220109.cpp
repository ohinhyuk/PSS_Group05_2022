#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int temp = 0;

        while(num >= 10){
            while(num > 0){
                temp += num % 10;
                num = num/10;
            }
            num = temp;
            temp = 0;
        }
        return num;
    }
};

int main(int args, char** argv){
    Solution s;
    cout << s.addDigits(38);
    
}