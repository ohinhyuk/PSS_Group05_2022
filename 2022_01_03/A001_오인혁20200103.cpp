#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:

public:
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        
        int cookie;
        int greed;
        int output = 0;
        int s_size = s.size();
        
        for(int i = 0 ;i < s_size ; i++){
        int g_size = g.size();    
            cookie = s.back();
            s.pop_back();   
            for(int j = 0 ; j <g_size ; j++){
                greed = g.back();
                g.pop_back();
                if(greed <= cookie){
                    output ++;
                    break;
                }
            }
        }
        return output;
    }
    
};

int main(int args , char** argv){
    int output = 0;
    vector<int> g;
    vector<int> s;
    vector<int> :: iterator it;

    Solution sol;

    g.push_back(1);
    g.push_back(2);
    g.push_back(3);

    s.push_back(1);
    s.push_back(2);
    
    cout << "g = [" ;
    for(it = g.begin() ; it!=g.end() ; it++){
        if((it+1)==g.end()){
            cout << *it;
        }
        else{
            cout << *it << "," ;
        }
    }
    cout << "]," << ' ';

    cout << "s = [";
    for(it = s.begin() ; it!=s.end() ; it++){
        if((it+1)==s.end()){
            cout << *it;
        }
        else{
            cout << *it << "," ;
        }
    }
    cout << "]" << endl;


    output = sol.findContentChildren(g,s);

    cout << "Output: " << output << endl;
    
}