#include <iostream>
#include <vector>

using namespace std;

int max_people(vector<int>& out , vector<int>& in){

    int temp = 0;
    int max = 0;
    for(int i = 0 ; i < 4 ; i++){
        temp += in[i];
        temp -= out[i];
        if(max<temp){
            max = temp;
        }
    }


    return max;
}

int main(int args, char** argv){
    int in = 0 ;
    int out = 0;
    vector<int> _in;
    vector<int> _out;
    for(int i = 0 ; i < 4 ; i++){
        cin >> out;
        cin >> in;
        _out.push_back(out);
        _in.push_back(in);
    }
    
    cout << max_people(_out, _in);
}