#include <iostream>
#include <map>

using namespace std;

int main(int args ,char** argv){
    int number = 0;
    map<int, int> list;

    for(int i = 0 ; i < 10 ; ++i){
        cin >> number;
        number %= 42;
        list[number]++;
    }
    cout << list.size();
}