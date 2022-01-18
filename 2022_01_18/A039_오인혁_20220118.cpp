#include <cmath>
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i = 0;
        while(num > pow(i,2)){
            i++;
            if(num == pow(i,2)){
                return true;
            }
        }
        return false;
    }
};