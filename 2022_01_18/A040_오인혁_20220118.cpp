class Solution {
public:
    
    int numbers_of_vowels(string s){
        int numbers = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||s[i] == 'U') numbers++;
        }
        return numbers;
    }
    
    bool halvesAreAlike(string s) {
        int mid = s.size()/2;
        
        string a;
        string b;
        
        
        a = s.substr(0,mid);
        b = s.substr(mid);
        if(numbers_of_vowels(a) == numbers_of_vowels(b)) return true;
        
        return false;
        
    }
};