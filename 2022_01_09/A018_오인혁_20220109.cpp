#include <iostream>
#include <vector>
#include <Algorithm>
using namespace std;

int minimum_S(vector<int>& A, vector<int>& B){
    vector<int> temp;
    vector<int> copy_B;
    vector<int> order;
    vector<int> copy_A;
    temp = B;
    copy_B = B;
    copy_A = A;
   
    sort(copy_A.rbegin() , copy_A.rend());
    sort(temp.begin(), temp.end());
    for(int i = 0 ; i < temp.size() ; i++){
        for(int j = 0 ; j < temp.size() ; j++){
            if(temp[i] ==copy_B[j]){
                copy_B[j] = -1;
                order.push_back(j);
                break;
            }
        }
    }

    for(int i = 0 ; i< temp.size(); i ++){
        A[order[i]]= copy_A[i];
    }

    int S = 0;

    for(int i = 0 ; i <temp.size() ; i++){
       S += (B[i]*A[i]);
    }
    return S;
}

int main(int args, char** argv){
    int N;
    vector<int> B;
    vector<int> A;
    cin >> N;
    int num;
    for(int i = 0 ; i < N ; ++i){
        cin >> num;
        A.push_back(num);
    }
    for(int i = 0 ; i < N ; ++i){
        cin >> num;
        B.push_back(num);
    }
    cout << minimum_S(A,B);
}