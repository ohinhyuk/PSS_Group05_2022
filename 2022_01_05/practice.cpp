#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int args, char ** argv){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(99);
    cout << find(v.begin() , v.end() , 99) - v.begin() << ' ';
}