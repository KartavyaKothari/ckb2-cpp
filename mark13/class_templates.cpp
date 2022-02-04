#include<bits/stdc++.h>
using namespace std;

template <class JARVIS>
class Stack{
    vector<JARVIS> arr;
    int s;
    int top_idx;

    public:
    Stack(){
        arr = vector<JARVIS>(10);
        s = 0;
        top_idx = -1;
    }

    Stack(int n){
        arr = vector<JARVIS>(n);
        s = 0;
        top_idx = -1;
    }

    void push(JARVIS ele){
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

    JARVIS top(){
        // if(s == 0){
        //     cout<<"Stack empty"<<endl;
        
        // }

        return arr[top_idx];
    }

    int size(){
        return s;
    }
};

int main(){
    // Stack<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);

    // while(s.size() > 0){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }

    Stack<vector<vector<int>>> s2;
    s2.push({{1,2,3},{4,5,6}});
    s2.push({{10,2,30},{49,5,63}});

    while(s2.size() > 0){
        for(auto arr: s2.top()){
            for(auto ele: arr){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
        s2.pop();
    }


    return 0;
}