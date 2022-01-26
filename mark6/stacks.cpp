#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> arr;
    int s;
    int top_idx;

    public:
    Stack(){
        arr = vector<int>(10);
        s = 0;
        top_idx = -1;
    }

    Stack(int n){
        arr = vector<int>(n);
        s = 0;
        top_idx = -1;
    }

    void push(int ele){
        if(s == 10){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top_idx++;
        arr[top_idx] = ele;
        s++;
    }

    void pop(){
        if(s == 0){
            cout<<"Stack empty"<<endl;
            return;
        }

        top_idx--;
        s--;
    }

    int top(){
        if(s == 0){
            cout<<"Stack empty"<<endl;
            return -1;
        }

        return arr[top_idx];
    }

    int size(){
        return s;
    }
};

int main(){
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(s.size() > 0){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}