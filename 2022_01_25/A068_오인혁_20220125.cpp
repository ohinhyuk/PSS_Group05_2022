#include <iostream>

using namespace std;

struct Queue{
    int N = -1;
    int* memory = new int [N+1];
};

using queue = Queue *;

void push(int num ,queue q){
    
    q->memory[++q->N] = num;
}

void pop(queue q){
    if(q->N < 0){
        cout << -1 << "\n";
    }
    else{
        cout << q->memory[q->N--] <<"\n";
    }
}

void empty(queue q){
    if(q->N<0){
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
}

void size(queue q){
    cout << q->N+1 << "\n";
}

void front(queue q){
    if(q->N <0){
        cout << -1 << "\n";
    }
    else{
        cout << q->memory[0] << "\n";
    }
}
void back(queue q){
    if(q->N <0){
        cout << -1 << "\n";
    }
    else{
        cout << q->memory[q->N] << "\n";
    }
}

int main(int args , char ** argv){
    queue q = new Queue();
    int N;

    cin >> N;
    string s;
    int num;
    for(int i = 0 ; i < N ; ++i){
        cin >> s;
        if(s=="front"){
            front(q);
        }
        else if(s=="back"){
            back(q);
        }
        else if(s=="size"){
            size(q);
        }
        else if(s=="empty"){
            empty(q);
        }
        else if(s=="pop"){
            pop(q);
        }
        else{
            cin >> num;
            push(num,q);
        }
    }
}