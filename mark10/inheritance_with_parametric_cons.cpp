#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a, int b){
        cout<<"Cons of A"<<endl;
    }
};

class B: public A{
    public:
    B(int a, int b):A(a,b){
        cout<<"Cons of B"<<endl;
    }
};

int main(){
    cout<<"In main before caling func"<<endl;
    B b(10,30);
    cout<<"Outside func, in main"<<endl;

    return 0;
}