// 소수 구하기
// 에라토스테네스의 채
// 소수를 구하고 그 소수의 배수들을 지워 나가는 것.

#include <vector>

class Solution {
public:
    
    int countPrimes(int n) {
        int cnt = 0;
        bool * is = new bool[n+1];
        if(n == 0 || n ==1){
            return 0;
        }    
        for(int i = 2 ; i < n ; i++){
            is[i] = true;
        }
        
        for(int i = 2 ; i*i < n ; i++){ //a*b 와 b*a가 같기 때문에 i*i 까지만 해도 전부 걸러낼 수 있다.
            if(is[i]){
                for(int j = i*i ; j<n ; j+=i){ // i*i 부터 false를 줘도 된다. i *i 전까지 i * 2 , i*3 등 i * (i보다 작은 소수) 로 이미 걸러졌기 때문이다.
    
                    is[j] = false;
                }
            }
        }
        
        for(int i = 2; i < n ; i++){
            if(is[i] == true)
                cnt++;
        }
        return cnt;    
    }
    
};