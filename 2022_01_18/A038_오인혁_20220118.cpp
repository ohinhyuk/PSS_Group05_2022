class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        int num;
        int check;
        bool is = true;
        vector<int> digits;
        for(int i = left ; i <= right ; ++i){
            
            //  1~9 is self-dividing number
            
            if(i > 0 && i < 10){
                v.push_back(i);
                continue;
            }

            // else numbers

            else{

                // every digits in i are pushed in digits vector.
                num = i;
                while(num > 0){
                    if(num % 10 == 0){
                        // if there is 0 digit, make it to false.
                        is = false;
                        break;
                    }
                    digits.push_back(num % 10);
                    num = num / 10;
                }
                // checking if i is self-dividing number
                if(is==true){
                    int size = digits.size();
                    for(int j = 0 ; j < size ; ++j){
                        if((i % digits.back())!=0){
                            is = false;
                            cout << i;
                            break;
                        }
                        digits.pop_back();
                    }
                }
                // if i is self-dividing number, push to v vector.
                if(is==true){
                    v.push_back(i);
                }
            }
            // initializing checking variable( bool type is) , digits vector.
            is = true;
            digits.erase(digits.begin(),digits.end());
        }
        
        return v;
    }
};