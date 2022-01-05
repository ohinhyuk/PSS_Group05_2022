#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int comp = 0;
    int link = 0;
    cin >> comp ;
    cin >> link ;
    vector<int>::iterator it;
    vector<int> virus;
    virus.push_back(1);

    for(int i = 0 ; i < link ; i++){
        int a = 0;
        int b = 0;
        cin >> a >> b ;
        if (std::find(virus.begin(), virus.end(), a) != virus.end() && std::find(virus.begin(), virus.end(), b) == virus.end()) {
            virus.push_back(b);
        }
        else if (std::find(virus.begin(), virus.end(), b) != virus.end() && std::find(virus.begin(), virus.end(), a) == virus.end()) {
            virus.push_back(a);
        }
    }
    
    cout << virus.size() - 1;

    return 0;
}