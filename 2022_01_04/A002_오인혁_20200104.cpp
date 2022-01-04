#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>> Rows;
        vector<int> numbers;

        numbers.push_back(1);

        for(int i = 0 ; i < numRows -1 ; i++){
            Rows.push_back(numbers);
            vector<int> temp(numbers);
            int next_size = numbers.size()+1;
            numbers.erase(numbers.begin(),numbers.end());
            for(int j = 0 ; j< next_size ; j++){
                
                if(j == 0 || j == next_size - 1){
                    numbers.push_back(1);
                }
                else{
                    numbers.push_back(temp[j] + temp[j-1]);
                }
            }
            temp.erase(temp.begin() , temp.end());
        }
            Rows.push_back(numbers);

        return Rows;
    }
};

int main(int args ,char** argv){
    int num = 10;

    Solution sol ;
    vector<vector<int>> v = sol.generate(10);
    vector<int> :: iterator it;

    for(int i = 0 ; i < v.size() ; i++){
        for(int j = 0; j < v[i].size() ; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}